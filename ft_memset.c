/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaunevik <vaunevik@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:37:38 by vaunevik          #+#    #+#             */
/*   Updated: 2024/01/22 07:52:50 by vaunevik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = (char)c;
		i++;
	}
	return (b);
}
/*
#include <stdio.h>
#include <stddef.h>
#include <string.h>

int main(void)
{
	char str[] = "I hope this works";
	int	c = 842;
	size_t	len = 7;

	printf("Standard memset: %s \n", memset(str, c, len));
	char arr[]  = "I hope this works";
	printf("My ft_memset: %s \n", ft_memset(arr, c, len));
	printf("\n");
	return (0);
}*/
