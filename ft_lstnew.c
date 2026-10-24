/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstnew.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aabufarw <aabufarw@student.42.fr>         #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/13 21:57:41 by aabufarw         #+#    #+#              */
/*   Updated: 2026/10/20 11:55:26 by aabufarw        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *) malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*int main()
{
void *content = "Hello, World!";
t_list *new_node = ft_lstnew(content);

if (new_node)
{
printf("New node created successfully.\n");
printf("Content: %s\n", (char *)new_node->content);
printf("Next: %p\n", (void *)new_node->next);
free(new_node);
}
else
{
printf("Failed to create new node.\n");
}

return 0;
}*/
