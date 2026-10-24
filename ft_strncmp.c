/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabufarw <aabufarw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 15:06:33 by aabufarw          #+#    #+#             */
/*   Updated: 2026/10/20 11:58:01 by aabufarw         ###   ########.fr       */
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
/*int main(void)
{
const char *str1 = "Hello, World!";
const char *str2 = "Hello, World!";
size_t n = 5;

int result = ft_strncmp(str1, str2, n);
if (result == 0)
write(1, "Strings are equal up to n characters.\n", 39);
else
write(1, "Strings are not equal up to n characters.\n", 43);

return (0);
}*/
