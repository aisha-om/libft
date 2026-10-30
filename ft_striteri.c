/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_striteri.c                                     :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By:  aabufarw <aabufarw@student.42.fr>        #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/16 14:51:00 by  aabufarw        #+#    #+#              */
/*   Updated: 2026/10/30 17:14:07 by  aabufarw       ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*void
ft_print_indexed_char(unsigned int index, char * c)
{
printf("Index: %u, Character: %c\n", index, *c);
}

int	main(void)
{
char	str[] = "Hello, World!";

ft_striteri(str, ft_print_indexed_char);
return (0);
}*/
