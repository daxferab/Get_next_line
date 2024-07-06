/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferab <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:43:01 by daxferab          #+#    #+#             */
/*   Updated: 2024/06/17 21:22:37 by daxferab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	void	*buf[1];
	int		linenum;

	if(fd == -1 || !buf)
		return (NULL);
	else
	{
		find_nl(fd, linenum);
	}
}
