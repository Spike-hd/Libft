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
			while (s[i] != c && s[i] != '\0')
				i++;
		}
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

static void	free_words(char **result, int j)
{
	while (j--)
		free(result[j]);
	free(result);
}

char	**ft_split(char const *s, char c)
{
	char	**resultat;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	resultat = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!resultat)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{        
		if (s[i] != c && s[i] != '\0')
		{
			resultat[j] = ft_malloc(s + i, c);
			if (!resultat[j])  
			{
				free_words(resultat, j);  
				return (NULL);
			}
			j++;  
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		i++;
	}
	resultat[j] = 0;
	return (resultat);
}
