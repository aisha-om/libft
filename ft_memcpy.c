/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memcpy.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By:  aabufarw <aabufarw@student.42.fr>        #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/12 20:08:01 by  aabufarw        #+#    #+#              */
/*   Updated: 2026/10/30 16:16:24 by  aabufarw       ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*srcc;
	size_t				i;

	if (!dst && !src)
		return (NULL);
	dest = (unsigned char *) dst;
	srcc = (const unsigned char *) src;
	i = 0;
	while (i < n)
	{
		dest[i] = srcc[i];
		i++;
	}
	return (dst);
}

/*int	main(void)
{
const char	src[] = "Hello, World!";
char		dest[20];

ft_memcpy(dest, src, 14);
printf("Copied string: %s\n", dest);
return (0);
}*/
