/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strncmp.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By:  aabufarw <aabufarw@student.42.fr>        #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/17 15:06:33 by  aabufarw        #+#    #+#              */
/*   Updated: 2026/10/30 18:28:01 by  aabufarw       ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	if (i < n)
		return ((unsigned char) s1[i] - (unsigned char) s2[i]);
	return (0);
}

/*int	main(void)
{
const char	*str1 = "Hello, World!";
const char	*str2 = "Hello, World!";
size_t		n = 5;
int			result = ft_strncmp(str1, str2, n);

printf("the result  %d of comparing characters of \"%s\" and \"%s\":\n", result, str1, str2);
return (0);
}*/
