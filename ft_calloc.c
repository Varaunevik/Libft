/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaunevik <vaunevik@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 09:47:16 by vaunevik          #+#    #+#             */
/*   Updated: 2024/01/22 14:04:57 by vaunevik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t n)
{
	void	*ptr;
	size_t	total;

	if (count > 0 && (SIZE_MAX / count < n))
		return (NULL);
	total = count * n;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}
/*int main ()
{
	size_t	count = 4;
	size_t	n = 4;
	int i = 0;
	char *ptr;
	ptr = ft_calloc(count, n);
	printf("my calloc: ");
	while (i < count * n)
	{
		printf("[%c]", ptr[i]);
		i++;
	}
	ptr = calloc(count, n);
	printf("\nLibrary calloc: ");
	i = 0;
	while (i < count * n)
    {
        printf("[%c]", ptr[i]);
        i++;
    }
	return (0);
}*/
