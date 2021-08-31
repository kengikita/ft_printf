#include "ft_printf"

int	ft_usint(unsigned int num)
{
	char	*str;
	int		count;

	count = 0;
	num = (unsigned int)(4294967295 + 1 + num);
	if (num == 0)
	{
		count += ft_putchar('0');
		return (count);
	}
	str = ft_unsigned_itoa(num);
	count += ft_putstring(str);
	free(str);
	return (count);
}
