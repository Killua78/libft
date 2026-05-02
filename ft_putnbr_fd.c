/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboubeke <nboubeke@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 19:22:40 by nboubeke          #+#    #+#             */
/*   Updated: 2026/05/02 19:22:59 by nboubeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	nb;

	nb = n;
	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar_fd('-', fd);
			nb = -nb;
		}
		if (nb > 9)
			ft_putnbr_fd((nb / 10), fd);
		ft_putchar_fd((nb % 10 + '0'), fd);
	}
}
