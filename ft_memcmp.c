/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memcmp.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By:  aabufarw <aabufarw@student.42.fr>        #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/19 16:03:35 by  aabufarw        #+#    #+#              */
/*   Updated: 2026/10/30 14:52:52 by  aabufarw       ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = (const unsigned char *) s1;
	p2 = (const unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
const char	str1[] = "Hello, World!";
const char	str2[] = "Hello, 42!";
int			result;

result = ft_memcmp(str1, str2, 7);
printf("Result of ft_memcmp: %d\n", result);
if (result < 0)
printf("str1 is less than str2\n");
else if (result > 0)
printf("str1 is greater than str2\n");
else
printf("str1 is equal to str2\n");
return (0);
}*/
