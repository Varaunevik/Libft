/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaunevik <vaunevik@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 11:00:54 by vaunevik          #+#    #+#             */
/*   Updated: 2024/01/22 11:17:37 by vaunevik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			i;
	unsigned int	j;
	char			*str;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	while (s[i] != 0)
	{
		i++;
	}
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	while (s[j] != 0)
	{
		str[j] = f(j, s[j]);
		j++;
	}
	str[j] = '\0';
	return (str);
}
/*char map_funct(unsigned int index, char c)
{
	return(c + index);
}
int main()
{
	char const s[] = "Add some fuNCTion";
	char *result;
	result = ft_strmapi(s, &map_funct);
	if (result)
	{
		printf("original string: %s\n", s);
		printf("modified string: %s\n", result);
	}
	return (0);
}*/
