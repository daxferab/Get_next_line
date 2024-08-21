/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 01:36:18 by daxferna          #+#    #+#             */
/*   Updated: 2024/08/21 21:12:48 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int	fd;

 	fd = open("file.txt", O_RDONLY);
	for (int i = 0; i <= 3; i++)
		printf("%s", get_next_line(fd));
	close(fd);
}
