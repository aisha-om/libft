/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_putendl_fd.c                                   :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aabufarw <aabufarw@student.42.fr>         #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/16 16:49:30 by aabufarw         #+#    #+#              */
/*   Updated: 2026/10/20 11:56:00 by aabufarw        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
/*#include <fcntl.h>

int	main(void)
{
char	f[] = "aisha";
int		fd;

fd = open("me.c", O_WRONLY);
ft_putendl_fd(f, fd);
return (0);
}*/
