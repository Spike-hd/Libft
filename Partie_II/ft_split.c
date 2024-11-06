/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hduflos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 19:31:27 by hduflos           #+#    #+#             */
/*   Updated: 2024/11/06 20:02:26 by hduflos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != 0)
		{
			count++;
			while (s[i] != c)
				i++;
		}
		i++;
	}
	return (count);
}

static char	*ft_malloc(char *str, char c)
{
	int		i;
	char	*dest;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (ft_substr(str, 0, i));
}

char	**ft_split(char const *s, char c)
{
	char	**resultat;
	int		words;
	int		i;
	int		j;

	words = count_words((char *)s, c);
	resultat = (char **)malloc((words + 1) * sizeof(char *));
	if (!resultat)
		return (NULL);
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != 0)
		{
			resultat[j] = ft_malloc(s + i, c);
			j++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	resultat[j] = 0;
	return (resultat);
}
