/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboubeke <nboubeke@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:41:46 by nboubeke          #+#    #+#             */
/*   Updated: 2026/04/20 12:15:11 by nboubeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
			return (1);
		str++;
	}
	return (0);
}

int	ft_isdigit(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			return (1);
		str++;
	}
	return (0);
}

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

int	ft_isascii(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (*str >= 0 && *str <= 127)
			return (1);
		str++;
	}
	return (0);
}

#include <stdio.h>
int main(void)
{
	printf("%d", ft_isascii("\n"));
}
