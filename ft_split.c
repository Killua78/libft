/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboubeke <nboubeke@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 15:44:51 by nboubeke          #+#    #+#             */
/*   Updated: 2026/05/02 19:10:23 by nboubeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_len(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static int	count_word(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i])
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static void	free_tab(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}

static int	fill_tab(char **tab, char const *str, char c)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (str[k])
	{
		while (str[k] && str[k] == c)
			k++;
		if (str[k])
		{
			tab[i] = ft_substr((char *)str, k, word_len((char *)&str[k], c));
			if (!tab[i])
				return (0);
			k += word_len((char *)&str[k], c);
			i++;
		}
	}
	tab[i] = NULL;
	return (1);
}

char	**ft_split(char const *str, char c)
{
	char	**tab;

	if (!str)
		return (NULL);
	tab = malloc(sizeof(char *) * ((count_word((char *)str, c) + 1)));
	if (!tab)
		return (NULL);
	if (!fill_tab(tab, str, c))
	{
		free_tab(tab);
		return (NULL);
	}
	return (tab);
}
