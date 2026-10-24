/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstclear.c                                     :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aabufarw <aabufarw@student.42.fr>         #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/13 22:40:16 by aabufarw         #+#    #+#              */
/*   Updated: 2026/10/20 11:55:04 by aabufarw        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !(*lst) || !del)
		return ;
	current = *lst;
	while (current)
	{
		next = current->next;
		del(current->content);
		free(current);
		current = next;
	}
	*lst = NULL;
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

ft_lstclear(&head, free);

if (head == NULL)
printf("List cleared successfully.\n");
else
printf("List not cleared.\n");

return 0;
}*/
