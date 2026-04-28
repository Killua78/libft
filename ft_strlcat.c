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

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t lendest;
	size_t n;
	size_t i;
	size_t lensrc;

	lendest = strlen(dest);
	lensrc = strlen(src);
	i = 0;
	n = size;

	if (lendest >= n)
	{
		return (lensrc + size);
	}

	while (dest[i])
	{
		i++;
	}

	while (*src != '\0' && (i < size - 1))
	{
		dest[i] = *src++;
		i++;
	}
	dest[i] = '\0';

	return (lensrc + lendest);
}
