/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:43:04 by daxferab          #+#    #+#             */
/*   Updated: 2024/09/27 20:20:23 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100000
# endif

char	*get_next_line(int fd);
int		ft_findnl(char *str);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_getline(char *str);
char	*ft_updatestatic(char *str);
int		ft_strlen(char *str);
void	*ft_calloc(size_t count, size_t size);
char	*ft_read(int fd, char *remainder, char *buffer);

#endif