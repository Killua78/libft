/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboubeke <nboubeke@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 19:12:51 by nboubeke          #+#    #+#             */
/*   Updated: 2026/04/28 19:13:34 by nboubeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	lendest;
	size_t	i;
	size_t	j;
	size_t	lensrc;

	lendest = ft_strlen(dest);
	lensrc = ft_strlen(src);
	i = lendest;
	j = 0;
	if (lendest >= size)
		return (lensrc + size);
	while (src[j] && (i < size - 1))
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	return (lensrc + lendest);
}
