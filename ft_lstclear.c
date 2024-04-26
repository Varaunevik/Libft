/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaunevik <vaunevik@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:10:38 by vaunevik          #+#    #+#             */
/*   Updated: 2024/01/22 13:18:27 by vaunevik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!lst)
		return ;
	tmp = *lst;
	while (tmp != NULL)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
	*lst = NULL;
	return ;
}
/*void delete(void *content)
{
	free(content);
	return ;
}
#include <string.h>
int main()
{
	t_list *head = (t_list *)malloc(sizeof(t_list));
	head->content = strdup("heyyy");
	head->next = (t_list *)malloc(sizeof(t_list));
	head->next->content = strdup("hello");
	head->next->next = NULL;

	printf("List before: %s, %s\n", head->content, head->next->content);
	ft_lstclear(&head, delete);
	printf("address list after: %p", head);
	return (0);
}*/
