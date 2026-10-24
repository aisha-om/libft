/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strtrim.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aabufarw <aabufarw@student.42.fr>         #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/16 12:12:45 by aabufarw         #+#    #+#              */
/*   Updated: 2026/10/20 11:58:10 by aabufarw        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_char_in_set(char c, const char *toremove)
{
	while (*toremove)
	{
		if (c == *toremove)
			return (1);
		toremove++;
	}
	return (0);
}

char	*ft_strtrim(char const *tobetrimmed, char const *toremove)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*trimmed;

	if (!tobetrimmed || !toremove)
		return (NULL);
	start = 0;
	while (tobetrimmed[start] && ft_char_in_set(tobetrimmed[start], toremove))
		start++;
	end = ft_strlen((char *) tobetrimmed);
	while (end > start && ft_char_in_set(tobetrimmed[end - 1], toremove))
		end--;
	trimmed = (char *) malloc(end - start + 1);
	if (!trimmed)
		return (NULL);
	i = 0;
	while (start < end)
	{
		trimmed[i] = tobetrimmed[start];
		i++;
		start++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}
/*int main()
{
const char *str = "   Hello, World!   ";
const char *set = " ";
char *trimmed = ft_strtrim(str, set);
if (trimmed)
{
printf("Original: '%s'\n", str);
printf("Trimmed: '%s'\n", trimmed);
free(trimmed);
}
return 0;
}*/
