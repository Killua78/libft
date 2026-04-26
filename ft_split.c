/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboubeke <nboubeke@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 15:44:51 by nboubeke          #+#    #+#             */
/*   Updated: 2026/04/26 16:05:33 by nboubeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	word_len(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
	{
		i++;
	}

	return (i);
}

int	count_word(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] && str[i] != c && (i == 0 || str[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	tab = malloc(sizeof(char *) * (count_word(str) + 1));
	while(str[k])
	{
		while (str[k] && str[k] == c)
			k++;
		if (str[k])
		{
			j = 0;
			tab[i] = malloc(sizeof(char) * (word_len(&str[k]) + 1));
			while (str[k] && str[k] != c)
			{
				tab[i][j++] = str[k++];
			}
			tab[i][j] = '\0';
			i++;
		}
	}
	tab[i] = NULL;
	return (tab);
}
