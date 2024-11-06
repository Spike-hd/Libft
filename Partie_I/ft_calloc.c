/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hduflos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:24:16 by hduflos           #+#    #+#             */
/*   Updated: 2024/11/05 11:38:28 by hduflos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elem, size_t size)
{
	unsigned char	*res;

	res = malloc(elem * size);
	if (!res)
		return (NULL);
	ft_bzero(res, elem * size);
	return (res);
}
