/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:43:01 by daxferab          #+#    #+#             */
/*   Updated: 2024/07/23 11:21:09 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*remain;
	char		*buffer;
	char		*readfile;

	if (remain && remain != "")
	{
		while (remain != 0 && remain != "\n")
		{
			if (remain = "\n")
				return(readfile);
			else
				readfile = remain;
			remain++;
			readfile++;
		}
	}
	read(fd, buffer, BUFFER_SIZE);
	return (buffer);
}
