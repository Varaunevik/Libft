/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaunevik <vaunevik@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 08:53:16 by vaunevik          #+#    #+#             */
/*   Updated: 2024/01/18 08:30:54 by vaunevik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;
	int			i;

	ptr = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			ptr = &s[i];
		}
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return ((char *)ptr);
}
