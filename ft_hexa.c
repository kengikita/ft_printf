#include "ft_printf.h"

int	ft_hexa(unsigned int num, int type)
{
	int		count;
	char	*save;

	count = 0;
	if (num == 0)
	{
		count += ft_putchar('0');
		return (count);
	}
	save = ft_long_length((unsigned long long)num, 16);
	if (type == 0)
		save = ft_tolower(save);
	count += ft_putstring(save);
	free(save);
	return (count);
}
