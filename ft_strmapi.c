/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strmapi.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By:  aabufarw <aabufarw@student.42.fr>        #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/16 16:46:13 by  aabufarw        #+#    #+#              */
/*   Updated: 2026/10/30 18:17:15 by  aabufarw       ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	i;
	size_t			len;

	if (!s || !f)
		return (NULL);
	len = 0;
	while (s[len])
		len++;
	res = (char *) malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*char	my_function(unsigned int index, char c)
{
(void) index;
return (c + 1);
}

int	main(void)
{
char	*result = ft_strmapi("Hello, World!", my_function);

if (result)
{
printf("Modified string: %s\n", result);
free(result);
}
return (0);
}*/
