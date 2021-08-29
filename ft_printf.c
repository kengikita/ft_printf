#include "ft_printf.h"

static int	ft_print_special(va_list args, char const *str, int position)
{
	int	count;

	count = 0;
	if (str[position + 1] == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (str[position + 1] == 's')
		count += ft_putstring(va_arg(args, char *));
	else if (str[position + 1] == 'd')
		count += ft_digit(va_arg(args, int));
	else if (str[position + 1] == 'p')
		count += ft_pointer(va_arg(args, unsigned long long));
	else if (str[position + 1] == 'u')
		count += ft_unsigned_int((unsigned int)va_arg(args, unsigned int));
	else if (str[position + 1] == 'x')
		count += ft_hexa(va_arg(args, unsigned int), 0);
	else if (str[position + 1] == 'X')
		count += ft_hexa(va_arg(args, unsigned int), 1);
	else if (str[position + 1] == '%')
		count += ft_putchar(37);
	return (count);
}

static int	ft_print(char const *str, va_list args, int count)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			count += ft_print_special(args, str, i);
			i++;
		}
		else
			count += ft_putchar(str[i]);
		i++;
	}
	return (count);
}

int	ft_printf(char const *str, ...)
{
	int		count;
	va_list	args;

	va_start(args, str);
	count = 0;
	count = ft_print(str, args, count);
	va_end(args);
	return (count);
}
