/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboubeke <nboubeke@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 15:31:17 by nboubeke          #+#    #+#             */
/*   Updated: 2026/05/02 19:05:36 by nboubeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	if (!s1)
		return (NULL);
	i = 0;
	k = ft_strlen(s1);
	while (ft_strchr(set, s1[i]))
		i++;
	while (ft_strrchr(set, s1[k]))
		k--;
	if (i > k)
		return (ft_strdup(""));
	str = malloc(sizeof(char) * (k - i + 2));
	if (!str)
		return (NULL);
	j = 0;
	while (i <= k)
		str[j++] = s1[i++];
	str[j] = '\0';
	return (str);
}

/*
#include <stdio.h>

int main(void)
{
	char *str = "     ";
	char *set = " ";

	printf("%s", ft_strtrim(str, set));
}*/
