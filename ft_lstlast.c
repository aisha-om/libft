/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstlast.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aabufarw <aabufarw@student.42.fr>         #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/13 22:21:13 by aabufarw         #+#    #+#              */
/*   Updated: 2026/10/20 11:55:16 by aabufarw        ###   ########.fr        */
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
/*int main()
{
t_list *head = NULL;
t_list *new_node1 = (t_list *)malloc(sizeof(t_list));
new_node1->content = "Hello, ";
new_node1->next = NULL;

t_list *new_node2 = (t_list *)malloc(sizeof(t_list));
new_node2->content = "World!";
new_node2->next = NULL;

ft_lstadd_back(&head, new_node1);
ft_lstadd_back(&head, new_node2);

t_list *last_node = ft_lstlast(head);
if (last_node)
printf("Last node content: %s\n", (char *)last_node->content);
else
printf("List is empty.\n");

free(new_node1);
free(new_node2);
return 0;
}*/
