/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 09:33:59 by yel-alja          #+#    #+#             */
/*   Updated: 2025/01/20 10:17:57 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include <string.h>

char	*ft_strdup(char *s)
{
	char	*str;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	str = malloc(strlen(s) + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (free(s), str);
}

char	*get_next_line(int fd)
{
	char	line[100000];
	ssize_t	readbyte;
	char	buff;
	int		i;

	readbyte = 1;
	i = 0;
	buff = 0;
	line[i] = 0;
	while (readbyte)
	{
		readbyte = read(fd, &buff, 1);
		if (readbyte <= 0)
			break ;
		if (buff == '\n')
			break ;
		line[i++] = buff;
		line[i] = 0;
	}
	if (!*line)
		return (NULL);
	return (strdup(line));
}
