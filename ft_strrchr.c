/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabufarw <aabufarw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 11:11:51 by aabufarw          #+#    #+#             */
/*   Updated: 2026/10/20 11:58:07 by aabufarw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char) c)
			last = (char *) s;
		s++;
	}
	if ((unsigned char)*s == (unsigned char) c)
		return ((char *) s);
	return (last);
}
/*int main (void)
{
char *main = ft_strrchr( "my name is aisha" , 'a');
char *original = strrchr( "my name is aisha" , 'a');
printf("%s main \n %s original \n", main ,original );
}*/
