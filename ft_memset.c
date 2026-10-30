/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memset.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By:  aabufarw <aabufarw@student.42.fr>        #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/12 19:46:06 by  aabufarw        #+#    #+#              */
/*   Updated: 2026/10/30 17:04:17 by  aabufarw       ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t len)
{
	unsigned char	*str;
	unsigned char	t;
	size_t			i;

	str = (unsigned char *) ptr;
	t = (unsigned char) value;
	i = 0;
	while (i < len)
	{
		str[i] = t;
		i++;
	}
	return (str);
}

/*int	main(void)
{
unsigned char	mystring[] = "my name is aisha";

printf(" the result is %s\n", (char *) ft_memset(mystring, '0', 10));
}*/
