/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflorrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 21:13:58 by lflorrie          #+#    #+#             */
/*   Updated: 2020/12/30 21:15:50 by lflorrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


int		findEndl(char	*buffer)
{
	int		i;

	i = 0;
	while (buffer[i] != '\n' && buffer [i] != '\0')
	{
		++i;
	}
	return (i);
}

int		get_next_line(int fd, char **line)
{
	static char	buffer[BUFFER_SIZE + 1];
	int			count;
	char		*temp;
	int			rowlen;

	if (buffer[0] != '\0')
	{	
		// if (buffer[findEndl(buffer)] != '\0')
		// 	ft_strlcpy(buffer, buffer + findEndl(buffer) + 1, BUFFER_SIZE - findEndl(buffer) - 1);
		
		if (!(*line = (char*)malloc(sizeof(char)*(findEndl(buffer) + 1))))
			return (-1);
		ft_strlcpy(*line, buffer, findEndl(buffer) + 1);
		if (ft_strlen(*line) < ft_strlen(buffer))
			return (1);
	}
	buffer[BUFFER_SIZE] = '\0';
	while ((count = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[count] = '\0';
		rowlen = findEndl(buffer);
		temp = *line;
	 	if (!(*line = (char*)malloc(sizeof(char)*(rowlen + 1 + ft_strlen(temp)))))
			return (-1);
		ft_strlcpy(*line, temp, ft_strlen(temp) + 1);
		ft_strlcpy(*line + ft_strlen(temp), buffer, rowlen + 1);
		if (temp)
		{
			free(temp);
		}
		if (count < BUFFER_SIZE)
		{

			buffer[0] = '\0';
			return (0);
		}
		if (BUFFER_SIZE > rowlen)
			return (1);	
	}
	if (!(*line))
 	{
 		if (!(*line = (char*)malloc(sizeof(char)*(1))))
			return (-1);
		(*line)[0] = '\0';
	}
	return (count);
}
