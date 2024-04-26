/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaunevik <vaunevik@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 09:10:53 by vaunevik          #+#    #+#             */
/*   Updated: 2024/01/22 12:39:03 by vaunevik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
	return ;
}
/*int main()
{
	t_list *new = (t_list *)malloc(sizeof(t_list));
	new->next = NULL;

	t_list *head = (t_list *)malloc(sizeof(t_list));
	head->content = "heyyy";
	head->next = (t_list *)malloc(sizeof(t_list));
	head->next->content = "hello";
	head->next->next = NULL;

	printf("Address of new before: %p\n", new);
	printf("Address of first node before: %p\n", head);
	ft_lstadd_front(&head, new);
	printf("Address of secons nosw after: %p\n", head->next);
	printf("Address of new after: %p\n", head);
	return (0);
}*/
