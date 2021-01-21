/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflorrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 21:16:16 by lflorrie          #+#    #+#             */
/*   Updated: 2020/12/30 21:16:17 by lflorrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	int length;

	length = 0;
	if (!str)
		return (0);
	while (*str)
	{
		++length;
		++str;
	}
	return (length);
}

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
