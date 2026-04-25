// 42 header

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t lendest;
	size_t n;
	size_t i;
	size_t lensrc;
	size_t lenfull;

	lendest = strlen(dest);
	lensrc = strlen(src);
	lenfull = lensrc + lendest;
	i = 0;
	n = size;

	if (lendest >= n)
	{
		return (lensrc + size);
	}

	while (dest[i])
	{
		i++;
	}

	while (*src != '\0' && (i < size - 1))
	{
		dest[i] = *src++;
		i++;
	}
	dest[i] = '\0';

	return (lenfull);
}
