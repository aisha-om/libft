/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memmove.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aabufarw <aabufarw@student.42.fr>         #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/12 20:38:17 by aabufarw         #+#    #+#              */
/*   Updated: 2026/10/27 12:44:32 by aabufarw        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dest;
	const unsigned char	*srcc;

	if (!dst && !src)
		return (dst);
	srcc = (const unsigned char *) src;
	dest = (unsigned char *) dst;
	if (dest == srcc || len == 0)
		return (dst);
	if (dest < srcc)
	{
		while (len--)
			*dest++ = *srcc++;
	}
	else if (dest > srcc)
	{
		dest += len;
		srcc += len;
		while (len--)
			*--dest = *--srcc;
	}
	return (dst);
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
