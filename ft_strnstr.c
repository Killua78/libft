/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboubeke <nboubeke@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 15:42:56 by nboubeke          #+#    #+#             */
/*   Updated: 2026/04/25 16:55:47 by nboubeke         ###   ########.fr       */
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

	while (i + strlen(little) <= len)
	{
		if (ft_strncmp(&temp[i], little, strlen(little)) == 0)
		{
			return (&temp[i]);
		}
		i++;
	}
	return (NULL);
}
