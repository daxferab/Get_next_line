/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:42:58 by daxferab          #+#    #+#             */
/*   Updated: 2024/09/02 19:15:27 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_findnl(char	*str)
{
	int	i;

	i = 0;
	if (str == "")
		return (0);
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen(char	*s1)
{
	int	len;

	len = 0;
	while (s1[len])
		len++;
	return (len);
}

char	*ft_concat(char	*s1, char	*s2)
{
	char	*s1s2;
	int		i;
	int		j;

	s1s2 = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!s1s2)
		return (0);
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
