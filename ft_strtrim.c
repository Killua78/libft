// 42 header;

char	*ft_strtrim(char const *s1, char const *set)
{
	while (strchr(set, s1))
		s1++;

	while (strrchr(set, s1))
		s1--
}
