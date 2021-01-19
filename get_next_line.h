/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflorrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 21:16:27 by lflorrie          #+#    #+#             */
/*   Updated: 2020/12/30 21:17:22 by lflorrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H
#include <unistd.h>
#include <stdlib.h>

int		get_next_line(int fd, char **line);

size_t	ft_strlen(const char *str);

size_t	ft_strlcpy(char *dest, const char *src, size_t n);

char	*ft_strdup(const char *str);

#endif
