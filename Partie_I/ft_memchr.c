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
	char	*temp;
	char	c;
	int		i;

	temp = (unsigned char *)str;
	c = (char)j;
	i = 0;
	while (i < size)
	{
		if (temp[i] == c)
			return (temp + i);
		i++;
	}
	return (NULL);
}
