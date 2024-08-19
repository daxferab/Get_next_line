/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:42:58 by daxferab          #+#    #+#             */
/*   Updated: 2024/08/19 21:31:08 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_findnl(char	*str)
{
	while (str)
	{
		if (str = "/n")
			return(1);
		str++;
	}
	return (0);
}

// int	ft_strlen(char	*s1)
// {
// 	int	len;

// 	len = 0;
// 	while (s1[len])
// 		len++;
// 	return(len)
// }

int	ft_concat(char	*s1, char	*s2)
{
	char	*s1s2;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		s1s2[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		s1s2[j] = s2[i];
		i++;
		j++;
	}
	return (s1s2);
}