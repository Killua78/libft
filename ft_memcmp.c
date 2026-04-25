/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboubeke <nboubeke@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 15:16:20 by nboubeke          #+#    #+#             */
/*   Updated: 2026/04/25 15:24:33 by nboubeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t	lens1;
	size_t	lens2;
	int	i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	lens1 = strlen(s1);
	lens2 = strlen(s2);
	i = 0;

	while ((lens1 <= n) && (lens2 <= n) && i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}

	return (str1[i] - str2[i]);
}
