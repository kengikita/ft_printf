#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(char const *str, ...);
int		ft_putchar(char a);
int		ft_putstring(char *str);
int		ft_strlen(const char *str);
int		ft_tolower(int str);
int		ft_pointer(unsigned long long ull);
char	*ft_long_length(unsigned long long ull, int base);
char	*ft_itoa(int n);
int		ft_hexa(unsigned int num, int type);
int		ft_digit(int a);

#endif