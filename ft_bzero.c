/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabufarw <aabufarw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 12:31:08 by aabufarw          #+#    #+#             */
/*   Updated: 2026/10/20 11:54:31 by aabufarw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*p;
	size_t	i;

	i = 0;
	p = (char *) s;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}
/*int main()
{
char str[20] = "Hello, World!";
printf("Before bzero: %s\n", str);
ft_bzero(str, 5);
printf("After bzero: %s\n", str);
return 0;
}*/
