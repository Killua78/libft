// 42 header

char	*ft_strchr(const char *str, int c)
{
	const char *temp;

	temp = (char *)str;
	while (*temp)
	{
		if (*temp == c)
		{
			return (temp);
		}
		temp++;
	}

	if (c == '\0')
		return (temp);

	return (NULL);
}
