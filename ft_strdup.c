#include "ft_printf.h"

char	*ft_strdup(char *src)
{
	char	*dupe;
	int		size;
	int		i;

	i = 0;
	size = 0;
	while (src[size] != '\0')
		size++;
	dupe = malloc(sizeof(char) * (size + 1));
	if (!(dupe))
		return (NULL);
	while (*src != '\0')
	{
		dupe[i] = *src;
		src++;
		i++;
	}
	dupe[i] = '\0';
	return (dupe);
}
