/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hduflos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:46:00 by hduflos           #+#    #+#             */
/*   Updated: 2024/11/05 10:19:05 by hduflos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int		i;
	char	c;

	i = 0;
	c = (char)ch;
	while (str[i])
	{
		if (str[i] == c)
			return ((char *)(str + i));
		i++;
	}
	if (c == 0)
		return ((char *)(str + i));
	return (NULL);
}
