#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

int		ft_printf(char const *str, ...);
int		ft_putchar(char a);
int		ft_putstring(char *str);
int		ft_strlen(const char *str);
char	*ft_tolower(char *str);
int		ft_pointer(unsigned long long ull);
char	*ft_long_length(unsigned long long ull, int base);
char	*ft_itoa(int n);
int		ft_hexa(unsigned int num, int type);
int		ft_digit(int a);
char	*ft_strdup(char *src);
int		ft_unsigned_int(unsigned int num);
char	*ft_unsigned_itoa(unsigned int num);

#endif