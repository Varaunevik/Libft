/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaunevik <vaunevik@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 09:40:16 by vaunevik          #+#    #+#             */
/*   Updated: 2024/01/22 12:52:24 by vaunevik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
		return ;
	}
}
/*int main()
{
	t_list *new = (t_list *)malloc(sizeof(t_list));
	new->content = "well";
	new->next = NULL;

	t_list *head = (t_list *)malloc(sizeof(t_list));
	head->content = "heyyy";
	head->next = (t_list *)malloc(sizeof(t_list));
	head->next->content = "hello";
	head->next->next = NULL;

	printf("Address of new before: %p\n", new);
	printf("Address of last node before: %p\n", head->next);
	ft_lstadd_back(&head, new);
	printf("Address of last node after: %p\n", head->next->next);
	return (0);
}*/
