/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:43:01 by daxferab          #+#    #+#             */
/*   Updated: 2024/08/22 21:21:49 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_line(char	*str)
{
	char	*line;
	int		i;

	i = 0;
	while (str[i] != '\n')
		i++;
	line = malloc(sizeof(char) * (i + 1));
	i = 0;
	line[i] = str[i];
	while (str[i] != '\n')
	{
		i++;
		line[i] = str[i];
	}
	return (line);
}

char	*update_static(char	*str)
{
	char	*updated_remain;
	int		i;
	int		j;

	i = 0;
	while (str[i] != '\n')
		i++;
	updated_remain = malloc(sizeof(char) * ft_strlen(str) - i);
	i++;
	j = 0;
	while (str[i])
	{
		updated_remain[j] = str[i];
		i++;
		j++;
	}
	return (updated_remain);
}

char	*get_next_line(int fd)
{
	static char	*remain;
	char		*readbuf;
	char		*line;

	readbuf = malloc(BUFFER_SIZE * sizeof(char));
	if (!remain)
		remain = malloc(BUFFER_SIZE * sizeof(char));
	while (ft_findnl(remain) == 0)
	{
		read(fd, readbuf, BUFFER_SIZE);
		remain = ft_concat(remain, readbuf);
	}
	line = get_line(remain);
	remain = update_static(remain);
	return (line);
}
