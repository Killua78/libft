// 42 header

#include <string.h>

char	*ft_strrchr(const char *str, int c)
{
	char	*temp;
	size_t	size;

	size = strlen(str);
	temp = (char *)str;

	if (c == '\0')
	{
		return (&temp[size]);
	}

	while (size--)
	{
		if (temp[size] == c)
			return (&temp[size]);
	}

	return (NULL);
}
