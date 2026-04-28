/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboubeke <nboubeke@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 16:04:42 by nboubeke          #+#    #+#             */
/*   Updated: 2026/04/28 16:06:06 by nboubeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (ft_isalpha(str) && ft_isdigit(str))
			return (1);
		str++;
	}
	return (0);
}
