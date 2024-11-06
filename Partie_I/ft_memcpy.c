/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hduflos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:34:47 by hduflos           #+#    #+#             */
/*   Updated: 2024/11/05 09:45:00 by hduflos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memcpy(void *dest, const void *src, size_t size)
{
	unsigned char	*destination;
	const char		*source;
	size_t			i;

	destination = (unsigned char *)dest;
	source = (const char *)src;
	i = 0;
	while (i < size)
	{
		destination[i] = source[i];
		i++;
	}
	return (dest);
}
