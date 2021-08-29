#include "ft_printf.h"

int	ft_tolower(int str)
{
	int	num;

	num = str;
	if (num >= 65 && num <= 90)
		num = num + 32;
	return (num);
}
