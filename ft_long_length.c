#include "ft_printf.h"

static char	*ft_long_char(unsigned long long ull_save, int base,
char *length, int count)
{
	while (ull_save != 0)
	{
		if ((ull_save % base) < 10)
			length[count - 1] = (ull_save % base) + 48;
		else
			length[count - 1] = (ull_save % base) + 55;
		ull_save /= base;
		count--;
	}
	return (length);
}

char	*ft_long_length(unsigned long long ull, int base)
{
	char				*length;
	unsigned long long	ull_save;
	int					count;

	length = 0;
	count = 0;
	ull_save = ull;
	if (ull == 0)
		return (ft_strdup("0"));
	while (ull != 0)
	{
		ull /= base;
		count++;
	}
	length = malloc(sizeof(char) * (count + 1));
	if (!length)
		return (0);
	length[count] = '\0';
	length = ft_long_char(ull_save, base, length, count);
	return (length);
}
