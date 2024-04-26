/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaunevik <vaunevik@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 08:24:48 by vaunevik          #+#    #+#             */
/*   Updated: 2024/01/22 11:54:42 by vaunevik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*int main()
{
	t_list *hi = ft_lstnew("Hello world");
	printf("Content stored in node: %s\n", hi->content);
	printf("Address of the stored content: %p\n", hi);
	printf("Address of next: %p\n", hi->next);
	return 0;
}*/
