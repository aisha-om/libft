/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memcpy.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aabufarw <aabufarw@student.42.fr>         #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/12 20:08:01 by aabufarw         #+#    #+#              */
/*   Updated: 2026/10/20 11:55:43 by aabufarw        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*srcc;
	size_t				i;

	dest = (unsigned char *) dst;
	srcc = (const unsigned char *) src;
	i = 0;
	while (i < n)
	{
		dest[i] = srcc[i];
		i++;
	}
	return (dest);
}
