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
	static char	buffer[BUFFER_SIZE];
	int			count;
	char		*temp;
	int			rowlen;

	// if (!(line = (char**)malloc(sizeof(char)*(BUFFER_SIZE + 1))))
	// 	return (-1);
	while ((count = read(fd, buffer, BUFFER_SIZE)))
	{
		if (count == -1)
			return (-1);
		rowlen = findEndl(buffer);
	 	if (!(line = (char**)malloc(sizeof(char)*(rowlen + 1))))
			return (-1);
		ft_strlcpy(line, buffer, rowlen);
		if (i == BUFFER_SIZE)
		{

		}
	}
}
