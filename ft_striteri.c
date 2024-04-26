/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaunevik <vaunevik@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 10:52:53 by vaunevik          #+#    #+#             */
/*   Updated: 2024/01/22 11:33:23 by vaunevik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
	return ;
}
/*void iteri(unsigned int i, char *c)
{
	i = i + 1;
	*c = 'a';
	return ;
}

int main()
{
	char s[] = "hello";
	char s1[] = "hello";
	printf("Before: %s\n", s);
	ft_striteri(s1, iteri);
	printf("After: %s\n", s1);
	return (0);
}*/
