/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaunevik <vaunevik@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 08:12:33 by vaunevik          #+#    #+#             */
/*   Updated: 2024/01/22 08:44:55 by vaunevik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	if (dst <= src)
	{
		while (i < len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	else if (dst > src)
	{
		while (len > 0)
		{
			((char *)dst)[len - 1] = ((char *)src)[len - 1];
			len--;
		}
	}
	return (dst);
}
/* #include <stdlib.h>
#include <strings.h>
#include <stdio.h>

int main ()
{
	char src1[] = "Hello world!";
	char dst1[20];
	ft_memmove(dst1, src1, strlen(src1) + 1);
	printf("Forward cpy: %s\n", dst1);

	char src2[] = "This is a test";
	char dst2[20];
	size_t srclen = strlen(src2) + 1;

	ft_memmove(dst2 + (sizeof(dst2) - srclen), src2, srclen);
	printf("Backward cpy: %s\n", dst2);

	char lsrc1[] = "Hello world!";
    char ldst1[20];
    memmove(ldst1, lsrc1, strlen(lsrc1) + 1);
    printf("Forward cpy lib: %s\n", ldst1);

    char lsrc2[] = "This is a test";
    char ldst2[20];
    size_t lsrclen = strlen(lsrc2) + 1;

    memmove(ldst2 + (sizeof(ldst2) - lsrclen), lsrc2, lsrclen);
    printf("Backward cpy lib: %s\n", ldst2);
	return (0);
}*/
