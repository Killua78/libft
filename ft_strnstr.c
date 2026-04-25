/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboubeke <nboubeke@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 15:42:56 by nboubeke          #+#    #+#             */
/*   Updated: 2026/04/25 16:30:48 by nboubeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	char	*temp;

	temp = (char *)big;
	i = 0;
	if (*little == '\0')
		return (temp);

	while (temp[i] < len)
	{
		if (ft_strncmp(big, little, strlen(little)) == 0)
		{
			return (&temp[i]);
		}
		i++;
	}
}
