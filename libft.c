/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboubeke <nboubeke@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:41:46 by nboubeke          #+#    #+#             */
/*   Updated: 2026/04/21 17:54:03 by nboubeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

int	ft_isprint(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (*str >= ' ' && *str <= '~')
			return (1);
		str++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = str;
	while (n > 0)
	{
		*ptr = (unsigned char) c;
		ptr++;
		n--;
	}
}

void	ft_bzero(void *str, size_t n)
{
	unsigned char *ptr;
	size_t	pos;

	ptr = str;
	pos = 0;
	while (n > pos)
	{
		ptr[n] = 0;
		n--;
	}
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char*) dest;
	s = (unsigned char*) src;

	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{

}

void	*ft_strlcpy(char *dest, const char *src, size_t size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
}

#include <stdio.h>
int main(void)
{
	// char *str = "coucou cmt cv!";
	// printf("%c", ft_memset(str, '!', sizeof(char) * 7));
	char s[] = "123456781234567";
	printf("%s", ft_memcpy(s + 2, s, 14));
}
