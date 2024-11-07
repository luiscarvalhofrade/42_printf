#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

int		ft_printf(const char *s, ...);
void	ft_itoa_base_pf(int n, char *base, int *count);
void	ft_itoa_pf(int n, int *count);
void	ft_itoa_unsigned_pf(unsigned int n, int *count);
void	ft_convert_ptr_pf(void *ptr, char *base, int *count);
void	ft_putchar_pf(char n, int *count);
void	ft_putstr_pf(char *string, int *count);

#endif