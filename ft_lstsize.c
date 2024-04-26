/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaunevik <vaunevik@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 09:21:37 by vaunevik          #+#    #+#             */
/*   Updated: 2024/01/22 12:24:41 by vaunevik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	if (!lst)
		return (0);
	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*int main()
{
	t_list *head = NULL;
	head = (t_list *)malloc(sizeof(t_list));
	head->content = "heyyy";
	head->next = (t_list *)malloc(sizeof(t_list)); 
	head->next->content = "hello";
	head->next->next = NULL;

	int sizelist = ft_lstsize(head);
	printf("Size of list: %d", sizelist);
	return (0);
}*/
