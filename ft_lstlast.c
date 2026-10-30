/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstlast.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By:  aabufarw <aabufarw@student.42.fr>        #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/13 22:21:13 by  aabufarw        #+#    #+#              */
/*   Updated: 2026/10/30 14:28:39 by  aabufarw       ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*int	main(void)
{
t_list	*head = NULL;
t_list	*new_node1 = ft_lstnew(ft_strdup("Hello, "));
t_list	*new_node2 = ft_lstnew(ft_strdup("World!"));

ft_lstadd_back(&head, new_node1);
ft_lstadd_back(&head, new_node2);
t_list	*last_node = ft_lstlast(head);

if (last_node)
printf("Last node content: %s\n", (char *) last_node->content);
else
printf("List is empty.\n");
ft_lstclear(&head, free);
return (0);
}*/
