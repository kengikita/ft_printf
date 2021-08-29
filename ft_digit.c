#include "ft_printf.h"

int	ft_digit(int a)
{
	char	*str;
	int		count;

	count = 0;
	str = ft_itoa(a);
	count = ft_putstring(str);
	free(str);
	return (count);
}
