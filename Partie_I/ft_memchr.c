/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hduflos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:13:17 by hduflos           #+#    #+#             */
/*   Updated: 2024/11/05 12:30:18 by hduflos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int j, size_t size)
{
	const char	*temp;
	char	c;
	unsigned int		i;

	temp = (const char *)str;
	c = (char)j;
	i = 0;
	while (i < size)
	{
		if (temp[i] == c)
			return ((void *)(temp + i));
		i++;
	}
	return (NULL);
}
