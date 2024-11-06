/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hduflos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:46:20 by hduflos           #+#    #+#             */
/*   Updated: 2024/11/06 16:58:14 by hduflos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *s1, const char *s2, size_t len)
{
	int	i;
	int	j;

	i = 0;
	if (s2_len == 0)
		return ((char *)s1);
	while (s1[i] && i + ft_strlen(s2) < len)
	{
		j = 0;
		while (s1[i + j] == s2[j] && s2[j] != 0)
			j++;
		if (s2[j] == '\0')
			return ((char *)(s1 + i));
		i++;
	}
	return (NULL);
}
