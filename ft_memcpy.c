/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaunevik <vaunevik@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 08:09:02 by vaunevik          #+#    #+#             */
/*   Updated: 2024/01/22 09:43:43 by vaunevik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	if (dst == NULL && src == NULL)
		return (dst);
	d = (char *)dst;
	s = (const char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	const char src[] = "Hello world";
	char dst[20];

	memcpy(dst, src, strlen(src));
	printf("Normal memcpy: %s\n", dst);

	char dst2[20];
	const char src2[] = "Hello world";

	ft_memcpy(dst2, src2, strlen(src2));
	printf("My memcpy: %s\n", dst2);
	return 0;
}*/
