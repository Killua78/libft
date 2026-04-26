/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboubeke <nboubeke@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 15:31:17 by nboubeke          #+#    #+#             */
/*   Updated: 2026/04/26 15:44:34 by nboubeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int	i;

	i = 0;
	str = s1;
	while (strchr(set, str[i]))
		i++;
	while (str
	while (strrchr(set, s1))
		s1--
}
