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

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	s2_len;

	s2_len = ft_strlen(s2);
	i = 0;
	if (s2_len == 0)
		return ((char *)s1);
	while (s1[i] && i + s2_len < len)
	{
		j = 0;
		while (s1[i + j] == s2[j] && s2[j] != 0)
			j++;
		if (j == s2_len)
			return ((char *)(s1 + i));
		i++;
	}
	return (NULL);
}
