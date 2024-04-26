/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaunevik <vaunevik@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 12:57:51 by vaunevik          #+#    #+#             */
/*   Updated: 2024/01/22 11:10:35 by vaunevik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_isset(const char c, const char *match)
{
	int	i;

	i = 0;
	while (match[i])
	{
		if (match[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*trim;

	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	start = 0;
	while (ft_isset(s1[start], set))
		start++;
	if (start >= ft_strlen(s1))
		return (ft_strdup(""));
	end = ft_strlen(s1) - 1;
	while (ft_isset(s1[end], set))
		end--;
	len = end - start + 2;
	trim = malloc(len * sizeof(char));
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, &s1[start], len);
	return (trim);
}
/*int main ()
{
	char const s1[] = "ahaWHAT???hahha";
	char const set[] = "ah";
	char *res = ft_strtrim(s1, set);
	printf("String before: %s\n", s1);
	printf("String after: %s", res);
	return (0);
}*/
