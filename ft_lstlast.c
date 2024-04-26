/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaunevik <vaunevik@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 09:34:44 by vaunevik          #+#    #+#             */
/*   Updated: 2024/01/22 13:49:51 by vaunevik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
#include <string.h>
int main()
{
	t_list *head = (t_list *)malloc(sizeof(t_list));
	head->content = strdup("heyyy");
	head->next = (t_list *)malloc(sizeof(t_list));
	head->next->content = strdup("hello");
	head->next->next = NULL;
	printf("Last node: %p\n", head->next);
	t_list *last = ft_lstlast(head);
	printf("Last node found from first: %p", last);
}*/
