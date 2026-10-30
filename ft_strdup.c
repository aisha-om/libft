/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strdup.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By:  aabufarw <aabufarw@student.42.fr>        #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/14 13:35:04 by  aabufarw        #+#    #+#              */
/*   Updated: 2026/10/30 17:09:12 by  aabufarw       ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	len;

	if (!s)
		return (null);
	len = ft_strlen(s);
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	ft_memcpy(dest, s, len + 1);
	return (dest);
}

/*int	main(void)
{
const char	*original = "Hello, World!";
char		*duplicate;

duplicate = ft_strdup(original);
if (duplicate != NULL)
{
printf("Original: %s\n", original);
printf("Duplicate: %s\n", duplicate);
free(duplicate);
}
else
{
printf("Memory allocation failed.\n");
}
return (0);
}*/
