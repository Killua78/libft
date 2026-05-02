/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboubeke <nboubeke@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 17:51:04 by nboubeke          #+#    #+#             */
/*   Updated: 2026/05/02 17:51:05 by nboubeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t num, size_t size)
{
	char	*tab;

	if (num != 0 && size > SIZE_MAX / num)
		return (NULL);
	tab = malloc(size * num);
	if (!tab)
		return (NULL);
	ft_bzero(tab, num * size);
	return (tab);
}
