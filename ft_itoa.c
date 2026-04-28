/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboubeke <nboubeke@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 16:08:34 by nboubeke          #+#    #+#             */
/*   Updated: 2026/04/26 16:15:52 by nboubeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	fill_itoa(int n)
{
	int		count;
	long	temp;

	count = 0;
	temp = n;
	if (temp == 0)
		return (1);
	if (temp < 0)
	{
		temp = -temp;
		count++;
	}
	while (temp > 0)
	{
		temp /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		count;
	long	nb;

	nb = n;
	count = fill_itoa(n);
	str = malloc(sizeof(char) * (count + 1));
	if (!str)
		return (NULL);
	str[count] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (count--)
	{
		str[count] = nb % 10 + '0';
		nb /= 10;
	}
	return (str);
}
