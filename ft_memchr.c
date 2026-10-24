/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabufarw <aabufarw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:57:32 by aabufarw          #+#    #+#             */
/*   Updated: 2026/10/20 11:55:36 by aabufarw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		value;
	size_t				i;

	ptr = (const unsigned char *) s;
	value = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == value)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}
/*int main ()
{
const char str[] = "aisha.omar";
const char ch = '.';
char *ret;

ret = ft_memchr(str, ch, strlen(str));

printf("String after %c is - %s\n", ch, ret);
return(0);
}*/
