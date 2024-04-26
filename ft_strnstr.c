/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaunevik <vaunevik@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 08:42:08 by vaunevik          #+#    #+#             */
/*   Updated: 2024/01/22 10:52:32 by vaunevik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	i = 0;
	j = 0;
	while (haystack[i] != '\0' && i < len)
	{
		while (i + j < len && haystack[i + j] == needle[j] && haystack[i + j])
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)haystack + i);
		}
		i++;
		j = 0;
	}
	return (NULL);
}
/*#include <string.h>
int main()
{
	const char hay[] = "You are a teacher!";
	const char need[] = "teacher";
	size_t length = 25;
	char *res = ft_strnstr(hay, need, length);
	printf("Found at: %p\n", res);
	printf("Found the following: %s\n", res);

	res = strnstr(hay, need, length);
	printf("Found at (library version): %p\n", res);
    printf("Found the following (library version): %s", res);
	return (0);
}*/
