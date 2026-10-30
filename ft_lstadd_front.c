/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstadd_front.c                                 :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By:  aabufarw <aabufarw@student.42.fr>        #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/13 22:05:35 by  aabufarw        #+#    #+#              */
/*   Updated: 2026/10/30 14:03:11 by  aabufarw       ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*int	main(void)
{
t_list	*head = NULL;
t_list	*new_node1 = ft_lstnew(ft_strdup("1"));
t_list	*new_node2 = ft_lstnew(ft_strdup("2"));
t_list	*new_node3 = ft_lstnew(ft_strdup("3"));

ft_lstadd_back(&head, new_node1);
ft_lstadd_back(&head, new_node2);
ft_lstadd_front(&head, new_node3);
t_list	*current = head;

while (current)
{
printf("%s", (char *) current->content);
current = current->next;
}
printf("\n");
ft_lstclear(&head, free);
return (0);
}*/
