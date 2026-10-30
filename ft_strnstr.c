/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strnstr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By:  aabufarw <aabufarw@student.42.fr>        #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/16 17:00:16 by  aabufarw        #+#    #+#              */
/*   Updated: 2026/10/30 18:29:32 by  aabufarw       ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *sub, size_t len)
{
	size_t	u;
	size_t	o;

	if (!sub[0])
		return ((char *) str);
	u = 0;
	while (u < len && str[u])
	{
		o = 0;
		while (str[u + o] && sub[o] && (u + o < len) && str[u + o] == sub[o])
			o++;
		if (!sub[o])
			return ((char *) & str[u]);
		u++;
	}
	return (NULL);
}

/*int	main(void)
{
const char	*str = "Hello, World!";
const char	*sub = "World";
size_t		len = 12;
char		*result = ft_strnstr(str, sub, len);

if (result)
printf("Found substring: %s\n", result);
else
printf("Substring not found.\n");
return (0);
}*/
