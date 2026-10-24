/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_split.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aabufarw <aabufarw@student.42.fr>         #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/16 14:37:28 by aabufarw         #+#    #+#              */
/*   Updated: 2026/10/20 12:03:22 by aabufarw        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static void	*free_tab(char **tab, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static char	*get_next_word(char const *s, char c, size_t *index)
{
	size_t	start;
	size_t	len;
	char	*word;
	size_t	i;

	while (s[*index] == c && s[*index])
		(*index)++;
	start = *index;
	while (s[*index] != c && s[*index])
		(*index)++;
	len = *index - start;
	word = (char *) malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[start + i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	words_count;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	words_count = count_words(s, c);
	result = (char **) malloc(sizeof(char *) * (words_count + 1));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (j < words_count)
	{
		result[j] = get_next_word(s, c, &i);
		if (!result[j])
			return (free_tab(result, j));
		j++;
	}
	result[j] = NULL;
	return (result);
}
/*int main(void)
{
char **result = ft_split("Hello, World! This is a test.", ' ');
if (result)
{
for (size_t i = 0; result[i] != NULL; i++)
{
write(1, result[i], ft_strlen(result[i]));
write(1, "\n", 1);
free(result[i]);
}
free(result);
}
return (0);
}*/
