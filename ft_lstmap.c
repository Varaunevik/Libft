/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaunevik <vaunevik@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:10:25 by vaunevik          #+#    #+#             */
/*   Updated: 2024/01/22 13:44:23 by vaunevik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newnode;

	if (!lst)
		return (NULL);
	newlist = NULL;
	while (lst != NULL)
	{
		if (f)
			newnode = ft_lstnew(f(lst->content));
		else
			newnode = ft_lstnew(lst->content);
		if (!newnode)
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		else
		{
			ft_lstadd_back(&newlist, newnode);
			lst = lst->next;
		}
	}
	return (newlist);
}
/*void	delete(void *content)
{
	free(content);
	return ;
}

void	*iter(void *content)
{
	char *cont = (char *)content;
	int i = 0;
	while (cont[i])
	{
		cont[i] = 'a';
		i++;
	}
	return cont;
}
#include <string.h>
int main()
{
	t_list *head = (t_list *)malloc(sizeof(t_list));
	head->content = strdup("heyyy");
	head->next = (t_list *)malloc(sizeof(t_list));
	head->next->content = strdup("hello");
	head->next->next = NULL;
	printf("String content in original: %s, %s",
	head->content, head->next->content);
	t_list *new = ft_lstmap(head, iter, delete);
	printf("string content in copied & changed string: %s, %s",
	new->content, new->next->content);
	return (0);
}*/
