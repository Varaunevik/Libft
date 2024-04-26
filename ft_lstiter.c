/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaunevik <vaunevik@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:51:52 by vaunevik          #+#    #+#             */
/*   Updated: 2024/01/22 13:29:36 by vaunevik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst && !f)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
	return ;
}
/*void	iter(void *content)
{
	char *cont = (char *)content;
	int i = 0;
	while (cont[i])
	{
		cont[i] = 'a';
		i++;
	}
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

	printf("String content before: %s, %s", head->content, head->next->content);
	ft_lstiter(head, iter);
	printf("String content after: %s, %s", head->content, head->next->content);

	return (0);
}*/
