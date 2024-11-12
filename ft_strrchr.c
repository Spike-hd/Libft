/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hduflos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:18:33 by hduflos           #+#    #+#             */
/*   Updated: 2024/11/05 10:32:02 by hduflos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int		str_len;
	char	c;

	c = (char)ch;
	str_len = ft_strlen(str);
	if (c == 0)
		return ((char *)(str + str_len));
	while (str_len > 0)
	{
		str_len--;
		if (str[str_len] == c)
			return ((char *)(str + str_len));
	}
	return (NULL);
}
