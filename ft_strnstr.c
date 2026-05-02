/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboubeke <nboubeke@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 15:42:56 by nboubeke          #+#    #+#             */
/*   Updated: 2026/04/25 16:55:47 by nboubeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	const char	*temp;
	size_t		lil;

	temp = big;
	i = 0;
	if (*little == '\0')
		return (temp);
	lil = ft_strlen(little);
	while (i + lil <= len)
	{
		if (ft_strncmp(&temp[i], little, lil) == 0)
			return (&temp[i]);
		i++;
	}
	return (NULL);
}
