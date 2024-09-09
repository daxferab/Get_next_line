/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 01:36:18 by daxferna          #+#    #+#             */
/*   Updated: 2024/09/05 19:40:17 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "string.h"

int	main(void)
{
	int	fd;

	fd = open("file.txt", O_RDONLY);
	for (int i = 0; i <= 3; i++)
		//get_next_line(fd);
		printf("%s", get_next_line(fd));
	close(fd);
}

/* int	main(void)
{
	char	*str = malloc(sizeof(char) * 5);
	str = strdup("hola");
	str[2] = '\n';
	printf("%d", ft_findnl(str));
} */
