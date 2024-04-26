/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaunevik <vaunevik@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 07:55:19 by vaunevik          #+#    #+#             */
/*   Updated: 2024/01/22 08:00:42 by vaunevik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr++ = 0;
		n--;
	}
}
/*
#include <strings.h>
int main()
{
	char org[] = "hello world";
	size_t i = 0;
	printf("Original string: %s\n", org);
	bzero(org, 5);
	printf("After lib bzero:");
	while (i < sizeof(org))
	{
		printf("[%c]", org[i]);
		i++;
	}
	printf("\n After my ft_bzero: ");
	char other[] = "hello world";
	ft_bzero(other, 5);
	i = 0;
	while (i < sizeof(other))
	{
		printf("[%c]", other[i]);
		i++;
	}
	return(0);
}*/
