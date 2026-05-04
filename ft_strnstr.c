/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboubeke <nboubeke@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 15:42:56 by nboubeke          #+#    #+#             */
/*   Updated: 2026/05/04 17:29:43 by nboubeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		lil;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	lil = ft_strlen(little);
	while (i + lil <= len && big[i])
	{
		if (ft_strncmp((char *)&big[i], little, lil) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
