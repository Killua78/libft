/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboubeke <nboubeke@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 14:28:07 by nboubeke          #+#    #+#             */
/*   Updated: 2026/05/02 14:28:11 by nboubeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	size;

	size = ft_strlen(str);
	if ((char)c == '\0')
		return ((char *)&str[size]);
	while (size > 0)
	{
		if (str[size] == (char)c)
			return ((char *)&str[size]);
		size--;
	}
	if (str[0] == (char)c)
		return ((char *)&str[0]);
	return (NULL);
}
