/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstmap.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aabufarw <aabufarw@student.42.fr>         #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/13 22:58:58 by aabufarw         #+#    #+#              */
/*   Updated: 2026/10/20 11:55:21 by aabufarw        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_list;
	t_list	*n_node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	n_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		if (!content)
			return (ft_lstclear(&n_list, del), NULL);
		n_node = ft_lstnew(content);
		if (!n_node)
			return (del(content), ft_lstclear(&n_list, del), NULL);
		ft_lstadd_back(&n_list, n_node);
		lst = lst->next;
	}
	return (n_list);
}

/*int	main(void)
{
t_list	*head = NULL;
t_list	*new_node1 = ft_lstnew(ft_strdup("Hello, "));
t_list	*new_node2 = ft_lstnew(ft_strdup("world!"));

ft_lstadd_back(&head, new_node1);
ft_lstadd_back(&head, new_node2);
t_list	*last_node = ft_lstmap(head, (void *) ft_strdup, free);

if (last_node)
printf("Last node content: %s\n", (char *) last_node->content);
else
printf("List is empty.\n");
ft_lstclear(&head, free);
ft_lstclear(&last_node, free);
return (0);
}*/
