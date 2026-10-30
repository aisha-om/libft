/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstsize.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By:  aabufarw <aabufarw@student.42.fr>        #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/13 22:17:31 by  aabufarw        #+#    #+#              */
/*   Updated: 2026/10/30 14:47:58 by  aabufarw       ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/*int	main(void)
{
t_list	*head = NULL;
t_list	*new_node1 = ft_lstnew(ft_strdup("Hello, "));
t_list	*new_node2 = ft_lstnew(ft_strdup("World!"));

ft_lstadd_back(&head, new_node1);
ft_lstadd_back(&head, new_node2);
unsigned int	size = ft_lstsize(head);

printf("List size: %u\n", size);
ft_lstclear(&head, free);
return (0);
}*/
