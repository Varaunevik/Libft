/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaunevik <vaunevik@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:36:04 by vaunevik          #+#    #+#             */
/*   Updated: 2024/01/22 13:01:10 by vaunevik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst && !del)
		return ;
	del(lst->content);
	free(lst);
	return ;
}
/*
void delete(void *head)
{
	free(head);
}

#include <string.h>
int main()
{
	t_list *head = (t_list *)malloc(sizeof(t_list));
	head->content = strdup("heyyy");

	printf("Content before: %s\n", head->content);
	ft_lstdelone(head, delete);
	printf("Content after: %s\n", head->content);
	return (0);
}*/
