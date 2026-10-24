/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstadd_front.c                                 :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aabufarw <aabufarw@student.42.fr>         #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/13 22:05:35 by aabufarw         #+#    #+#              */
/*   Updated: 2026/10/20 11:55:02 by aabufarw        ###   ########.fr        */
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
/*int main()
{
t_list *head = NULL;
t_list *new_node = (t_list *)malloc(sizeof(t_list));
new_node->content = "Hello, World!";
new_node->next = NULL;

ft_lstadd_front(&head, new_node);
)
printf("%s\n", (char *)head->content);

free(new_node);
return 0;
}*/
