// 42 header

#include <stdlib.h>


void	*calloc(size_t num, size_t size)
{
	char *tab;

	if (num == 0 || size == 0)
		return (malloc(0));
	if (255 / num < size)
		return (NULL);
	tab = malloc(size * num);
	if (!tab)
		return (NULL);
	ft_bzero(tab, num * size);
	return (tab);
}
