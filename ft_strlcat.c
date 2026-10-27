/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcat.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aabufarw <aabufarw@student.42.fr>         #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/12 22:46:18 by aabufarw         #+#    #+#              */
/*   Updated: 2026/10/27 12:32:39 by aabufarw        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	while (dst[dst_len] && dst_len < dstsize)
		dst_len++;
	if (dstsize == dst_len)
		return (dstsize + src_len);
	i = 0;
	while (src[i] && (dst_len + i) < dstsize - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dstsize + i] = '\0';
	return (dst_len + src_len);
}
/*int main()
{
char dst[20] = "Hello, ";
const char *src = "World!";
size_t dstsize = sizeof(dst);

printf("Before strlcat: %s\n", dst);
ft_strlcat(dst, src, dstsize);
printf("After strlcat: %s\n", dst);

return 0;
}
*/
