/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strchr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aabufarw <aabufarw@student.42.fr>         #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/10 11:11:51 by aabufarw         #+#    #+#              */
/*   Updated: 2026/10/26 11:48:58 by aabufarw        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
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
