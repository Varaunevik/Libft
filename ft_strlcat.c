/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaunevik <vaunevik@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:00:39 by vaunevik          #+#    #+#             */
/*   Updated: 2024/01/22 08:56:22 by vaunevik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[i] != '\0' && i < dstsize)
	{
		i++;
	}
	while ((i + j + 1) < dstsize && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i != dstsize)
	{
		dest[i + j] = '\0';
	}
	while (src[k] != '\0')
	{
		k++;
	}
	return (i + k);
}
/*
int	main()
{
	char dst[10] = "HEY!";
	char src[] = "what do you want?";
	size_t	result;
	result = ft_strlcat(dst, src, sizeof(dst));
	printf("Result string: %s Full length: %zu", dst, result);
	return (0);
}*/
