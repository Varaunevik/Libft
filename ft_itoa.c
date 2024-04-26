/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaunevik <vaunevik@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 14:52:22 by vaunevik          #+#    #+#             */
/*   Updated: 2024/01/22 10:37:47 by vaunevik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_intlen(int n)
{
	size_t	i;

	i = 1;
	n /= 10;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t		length;
	char		*str;
	long int	nbr;

	nbr = n;
	length = ft_intlen(n);
	if (n < 0)
	{
		nbr *= -1;
		length++;
	}
	str = malloc(sizeof(char) * (length + 1));
	if (!str)
		return (NULL);
	str[length] = '\0';
	while (length > 0)
	{
		str[length - 1] = (nbr % 10) + '0';
		nbr /= 10;
		length--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
/*int main ()
{
	int i = -1239990;
	printf("%s", ft_itoa(i));
	return (0);
}*/
