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

void	free_tab(char **str, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		free (str[i]);
		i++;
	}
	free (str);
}

char	**ft_split(char const *str, char c)
{
	char	**tab;
	int	i;
	int	k;

	i = 0;
	k = 0;
	tab = malloc(sizeof(char *) * (count_word((char *)str, c) + 1));
	if (!tab)
		return (NULL);
	while(str[k])
	{
		while (str[k] && str[k] == c)
			k++;
		if (str[k])
		{
			tab[i] = ft_substr((char *)str, k, word_len((char *)&str[k], c));
			if (!tab[i])
			{
				free_tab(tab, i);
				return (NULL);
			}
			k += word_len((char *)&str[k], c);
			i++;
		}
	}
	tab[i] = NULL;
	return (tab);
}

#include <stdio.h>

int main(void)
{
	char s[] = "";
	char c = 'a';
	char **tab = ft_split(s, c);

	int i = 0;
	while (tab[i])
	{
		printf("%s", tab[i]);
		i++;
	}
}