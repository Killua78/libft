/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboubeke <nboubeke@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 17:02:00 by nboubeke          #+#    #+#             */
/*   Updated: 2026/04/25 17:22:07 by nboubeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	nbr;
	int	sign;

	i = 0;
	sign = 1;
	nbr = 0;
	while (str[i] == ' ')
	{
		i++;
	}
	
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = -1;
		}
		i++;
	}

	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr*10 + (str[i] - '0');
		i++;
	}

	return (sign * nbr);
}
