/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hduflos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:42:34 by hduflos           #+#    #+#             */
/*   Updated: 2024/11/04 13:59:06 by hduflos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t count)
{
	unsigned char	*temp;
	size_t			i;

	temp = (unsigned char *) ptr;
	i = 0;
	while (i < count)
	{
		temp[i] = value;
		i++;
	}
	return (ptr);
}
