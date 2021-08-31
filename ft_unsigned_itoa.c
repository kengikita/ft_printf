#include "ft_printf.h"

char	*ft_unsigned_itoa(unsigned int num)
{
	char	*str;
	int		count;

	count = 0;
	str = ft_long_length((unsigned long long)num, 10);
	count += ft_putstring(str);
	free(str);
	return (count);
}
