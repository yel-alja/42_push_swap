/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 09:33:59 by yel-alja          #+#    #+#             */
/*   Updated: 2025/01/19 21:08:26 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

char	*find_line(char *buffer)
{
	char	*line;
	int		i;

	i = 0;
	line = malloc(10);
	while (buffer[i] != '\n' && buffer[i])
	{
		line[i] = buffer[i];
		i++;
	}
	line[i + 1] = '\0';
	return (line);
}
size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
char	*ft_strcpy(char *dst, char *src, int l)
{
	int	i;

	i = 0;
	while (src[i + l])
	{
		dst[i] = src[i + l];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*get_next_line(void)
{
	static char	buffer[100000000];
	char		*line;
	char		*buf;
	size_t		bytes_read;
	int			i;

	buf = buffer;
	bytes_read = 1;
	i = 0;
	while (buffer[i] != '\n' && bytes_read > 0 )
	{
		bytes_read = read(0, buf, 1);
		i++;
	}
	if(bytes_read == 0)
		return NULL;
	line = find_line(buffer);
	ft_strcpy(buffer, buffer, ft_strlen(line));
	return (line);
}
