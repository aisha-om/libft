/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstadd_back.c                                  :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aabufarw <aabufarw@student.42.fr>         #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/13 22:25:30 by aabufarw         #+#    #+#              */
/*   Updated: 2026/10/24 13:11:53 by aabufarw        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
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

t_list *current = head;
while (current)
{
printf("%s", (char *)current->content);
current = current->next;
}
printf("\n");

free(new_node1);
free(new_node2);
return 0;
}*/
