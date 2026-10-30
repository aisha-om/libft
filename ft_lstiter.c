/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstiter.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By:  aabufarw <aabufarw@student.42.fr>        #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/13 22:54:48 by  aabufarw        #+#    #+#              */
/*   Updated: 2026/10/30 14:25:18 by  aabufarw       ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*void	print_content(void *content)
{
printf("%s\n", (char *) content);
}

int	main(void)
{
t_list	*head = NULL;
t_list	*new_node1 = ft_lstnew(ft_strdup("Hello, "));
t_list	*new_node2 = ft_lstnew(ft_strdup("World!"));

ft_lstadd_back(&head, new_node1);
ft_lstadd_back(&head, new_node2);
t_list	*current = head;

while (current)
{
printf("%s", (char *) current->content);
current = current->next;
}
printf("\n");
printf("now the iteri\n");
ft_lstiter(head, print_content);
ft_lstclear(&head, free);
return (0);
}*/
