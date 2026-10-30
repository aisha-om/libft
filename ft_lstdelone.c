/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstdelone.c                                    :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By:  aabufarw <aabufarw@student.42.fr>        #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/19 16:07:54 by  aabufarw        #+#    #+#              */
/*   Updated: 2026/10/30 14:17:27 by  aabufarw       ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*int	main(void)
{
t_list	*head = NULL;
t_list	*new_node1 = ft_lstnew(ft_strdup("1"));
t_list	*new_node2 = ft_lstnew(ft_strdup("2"));
t_list	*new_node3 = ft_lstnew(ft_strdup("3"));

ft_lstadd_back(&head, new_node1);
ft_lstadd_back(&head, new_node2);
ft_lstadd_back(&head, new_node3);
head = new_node2;
ft_lstdelone(new_node1, free);
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
