/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabufarw <aabufarw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 13:33:50 by aabufarw          #+#    #+#             */
/*   Updated: 2026/10/20 11:54:35 by aabufarw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total_size;

	if (count == 0 || size == 0)
		return (malloc(0));
	if (count && size > (size_t) - 1 / count)
		return (NULL);
	total_size = count * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, total_size);
	return (ptr);
}
/*int main()
{
size_t numb = 5;
size_t size = sizeof(int);
int *arr = (int *)ft_calloc(numb, size);

if (arr == NULL)
{
printf("Memory allocation failed\n");
return 1;
}

for (size_t i = 0; i < numb; i++)
{
printf("%d ", arr[i]);
}
printf("\n");

free(arr);
return 0;
}*/
