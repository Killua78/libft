/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboubeke <nboubeke@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:41:46 by nboubeke          #+#    #+#             */
/*   Updated: 2026/04/23 15:45:56 by nboubeke         ###   ########.fr       */
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

// The  memset()  function  fills the first n bytes of the memory area pointed to by s,
// with the constant byte c
// The memset() function returns a pointer to the memory area s

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

// The  bzero()  function  erases  the  data  in  the n bytes of the memory,
//  starting at the location pointed to by s, by writing zeros (bytes containing '\0') to that area.

void	ft_bzero(void *str, size_t n)
{
	ft_memset(str, 0, n);
}

// The  memcpy() function copies n bytes from memory area src to memory area dest.  
// The memory areas must not overlap.
// The memcpy() function returns a pointer to dest.

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char*) dest;
	s = (unsigned char*) src;

	while (n > 0)
	{
		*d++ = *s++;
	}
}

// The memmove() function copies n bytes from memory area src to memory area dest.  
// The memory areas may overlap: 
// copying takes place as though the bytes in src are first copied into a temporary array, 
// that does not overlap src or dest, and the bytes are then copied from the temporary array to dest.
// The memmove() function returns a pointer to dest.

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	unsigned const char *s;

	d = dest;
	s = src;

	if (d < s)
	{
		while(n--)
			*d++ = *s++;
	}else{
		while(n--)
		{
			d[n] = s[n];
		}
	}

	return (dest);
}

// The strlcpy() function copies up to size - 1 characters from the 
// NUL-terminated  string  src  to dst, NUL-terminating the result.
// The strlcpy() functions return the length of src.

int	*ft_strlcpy(char *dest, const char *src, size_t size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	return (size);
}

// The  strlcat()  function appends the NUL-terminated string src to the end of dst.  
// It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.
// The strlcat() functions return the initial length  of  dst plus  the  length of src.

int	*ft_strlcat(char *dest, const char *src, size_t size)
{
	int	i;
	int	destlen;
	int	srclen;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	i = 0;

		
}

// If c is a lowercase letter, toupper() returns its uppercase equivalent, 
// if an uppercase representation exists in the current locale.
// Otherwise, it returns c.

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (c - 32);
	}else{
		return (c);
	}
}

// If c is an uppercase letter, tolower() returns its lowercase equivalent, 
// if a lowercase representation exists in the current locale.
// Otherwise, it returns c

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (c + 32);
	}else{
		return (c);
	}
}

#include <stdio.h>
int main(void)
{
	// char *str = "coucou cmt cv!";
	// printf("%c", ft_memset(str, '!', sizeof(char) * 7));
	// char s[] = "123456781234567";
	// printf("%s", ft_memcpy(s + 2, s, 14));
}
