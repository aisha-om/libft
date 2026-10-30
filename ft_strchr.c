/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strchr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By:  aabufarw <aabufarw@student.42.fr>        #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/10 11:11:51 by  aabufarw        #+#    #+#              */
/*   Updated: 2026/10/30 17:07:12 by  aabufarw       ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char) c)
			return ((char *) s);
		s++;
	}
	if ((unsigned char)*s == (unsigned char) c)
		return ((char *) s);
	return (NULL);
}

/*int	main(void)
{
const char	*str = "Hello, World!";
int			ch = '\0';
char		*result = ft_strchr(str, ch);

if (result != NULL)
printf("Character '%c' found at position: %ld\n", ch, result - str);
else
printf("Character '%c' not found in the string.\n", ch);
return (0);
}*/
