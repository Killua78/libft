// 42 header

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int	i;

	i = 0;
	if (strlen(s) < start)
	{
		str = malloc(1);
		str[0] = '\0';
		return (str);
	}

	str = malloc(sizeof(char) * len + 1);
	
	if (!str)
		return (NULL);
	while (i < len && s[start])
	{
		str[i++] = s[start++];
	}

	str[i] = '\0';

	return (str);
}
