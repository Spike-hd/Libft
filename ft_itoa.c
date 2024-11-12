/* ************************************************************************** */
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

static char	*fill_result(char *nb, int n, int size, int is_neg)
{
	nb[size] = '\0';
	size--;
	if (n == 0)
	{
		nb[size] = '0';
		return (nb);
	}
	if (n == -2147483648)
	{
		nb[size] = '8';
		size--;
		n = 214748364;
	}
	while (n)
	{
		nb[size] = (n % 10) + '0';
		n /= 10;
		size--;
	}
	if (is_neg)
		nb[0] = '-';
	return (nb);
}

static int	get_size(int n, int is_neg)
{
	int	size;

	size = 0;
	if (n == 0)
		return (1);
	if (is_neg)
	{
		size++;
		n = -n;
	}
	if (n == -2147483648)
		return (11);
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*nb;
	int		is_neg;
	int		size;

	is_neg = 0;
	if (n < 0)
	{
		is_neg = 1;
		n = -n;
	}
	size = get_size(n, is_neg);
	nb = (char *)malloc(size + 1);
	if (!nb)
		return (NULL);
	return (fill_result(nb, n, size, is_neg));
}
