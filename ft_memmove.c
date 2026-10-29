/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memmove.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aabufarw <aabufarw@student.42.fr>         #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/12 20:38:17 by aabufarw         #+#    #+#              */
/*   Updated: 2026/10/20 17:25:53 by aabufarw        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				dlen;
	size_t				slen;
	size_t				i;
	unsigned char		*dest;
	const unsigned char	*srcc;

	srcc = (const unsigned char *) src;
	dest = (unsigned char *) dst;
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (dest == srcc || len == 0)
		return (dst);
	i = 0;
	while (len-- > 0)
	{
		if (dlen > slen)
		{
			dest[i] = srcc[i];
			i++;
		}
		else
			dest[len] = srcc[len];
	}
	return (dest);
}
/*int main()
{
char dest[20] = "Hello, World!";
const char *src = "42 School";
size_t n = 5;

printf("Before memmove: %s\n", dest);
ft_memmove(dest, src, n);
printf("After memmove: %s\n", dest);

return 0;
}*/
