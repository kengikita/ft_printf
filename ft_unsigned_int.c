#include "ft_printf.h"

int	ft_unsigned_int(unsigned int num)
{
	int		count;

	count = 0;
	num = (unsigned int)(4294967295 + 1 + num);
	if (num == 0)
	{
		count += ft_putchar('0');
		return (count);
	}
	count = ft_unsigned_itoa(num);
	return (count);
}
