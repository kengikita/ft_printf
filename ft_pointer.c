#include "ft_printf.h"

int	ft_pointer(unsigned long long ull)
{
	char	*pointer;
	int		count;

	count = 0;
	if (ull == 0)
	{
		count += ft_putstring("0x");
		return (count);
	}
	pointer = ft_long_length(ull, 16);
	pointer = ft_tolower(pointer);
	count += ft_putstring("0x") + ft_putstring(pointer);
	free(pointer);
	return (count);
}
