/*************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hduflos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 22:08:32 by hduflos           #+#    #+#             */
/*   Updated: 2024/11/06 23:33:53 by hduflos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*nb;
	int		is_neg;
	int		temp;
	int		i;

	is_neg = 0;
	i = 0;
	if (n < 0)
		is_neg = 1;
	temp = n;
	while (n)
	{
		n /= 10;
		i++;
	}
	nb = (char *)malloc(i + 1 + is_neg);
	if (!nb)
		return (NULL);
	nb[i + is_neg] = 0;
	while (temp)
	{
		nb[--i + is_neg] = (temp % 10) + '0';
		temp /= 10;
	}
	if (is_neg)
		nb[0] = '-';
	return (nb);
}
