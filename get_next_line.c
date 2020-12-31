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

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t i;

	if (dest == NULL || src == NULL)
		return (0);
	i = 0;
	if (n != 0)
	{
		while (i < (n - 1) && src[i])
		{
			dest[i] = src[i];
			++i;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

char	*ft_strdup(const char *str)
{
	int		length;
	char	*res;

	length = 0;
	while (str[length])
	{
		++length;
	}
	if (!(res = (char*)malloc(sizeof(char) * (length + 1))))
		return (NULL);
	res[length] = '\0';
	while (length > 0)
	{
		--length;
		res[length] = str[length];
	}
	return (res);
}

int		findEndl(char	*buffer)
{
	int		i;

	i = 0;
	while (buffer[i] != '\n' || buffer [i] != '\0')
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

	if (!(*line = malloc(sizeof(char)*(BUFFER_SIZE + 1))))
		return (-1);
	while ((count = read(fd, buffer, BUFFER_SIZE)))
	{
		if (count == -1)
			return (-1);
		rowlen = findEndl(buffer);
	}
}
