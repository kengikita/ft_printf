#include "ft_printf.h"

int	ft_putstring(char *str)
{
	int	length;

	length = 0;
	if (!str)
	{
		str = "(null)";
		length = ft_strlen(str);
		write(1, str, ft_strlen(str));
	}
	else
	{
		length = ft_strlen(str);
		write(1, str, ft_strlen(str));
	}
	return (length);
}
