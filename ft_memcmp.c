/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaunevik <vaunevik@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 08:01:20 by vaunevik          #+#    #+#             */
/*   Updated: 2024/01/22 10:59:46 by vaunevik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
		{
			return (ptr1[i] - ptr2[i]);
		}
		i++;
	}
	return (0);
}
/*#include <string.h>
int main ()
{
	const char s1[] = "what";
	const char s2[] = "what";
	size_t n = 5;
	int difference = ft_memcmp(s1, s2, n);
	printf("The result from my memcmp: %d\n", difference);
	difference = memcmp(s1, s2, n);
	printf("The result from lib memcmp: %d\n", difference);
	return (0);
}*/
