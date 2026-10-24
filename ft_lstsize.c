/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstsize.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aabufarw <aabufarw@student.42.fr>         #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/13 22:17:31 by aabufarw         #+#    #+#              */
/*   Updated: 2026/10/20 11:55:32 by aabufarw        ###   ########.fr        */
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

unsigned int size = ft_lstsize(head);
printf("List size: %u\n", size);

free(new_node1);
free(new_node2);
return 0;
}*/
