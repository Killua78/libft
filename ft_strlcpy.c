// 42 header

#include <bsd/string.h>

int	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int	i;
	size_t	lensrc;
	int	n;

	lensrc = strlen(src);
	n = size;
	i = 0;

	if (size == 0)
	{
		return (lensrc);
	}

	while (*src != '\0' && (i < n - 1))
	{
		*dest++ = *src++;
		i++;
	}
	*dest = '\0';

	return (lensrc);
}
