/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:43:01 by daxferab          #+#    #+#             */
/*   Updated: 2024/08/22 18:28:21 by daxferna         ###   ########.fr       */
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
	while (str[i] != '\n')
	{
		line[i] = str[i];
		i++;
	}
	return(line);
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
	static char	*remain = "hola";
	char		*readbuf;
	char		*line;
	char		*readfile;

	while (ft_findnl(remain) == 0)
	{
		read(fd, readbuf, BUFFER_SIZE);
		remain = ft_concat(remain, readbuf);
	}
	line = get_line(remain);
	remain = update_static(remain);
	return (0);
}
