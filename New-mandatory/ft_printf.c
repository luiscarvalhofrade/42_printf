#include "ft_printf.h"

static void	ft_convertion_printf(va_list args, char *s, int *count)
{
	if (*s == 'c')
		ft_putchar_pf(va_arg(args, int), count);
	else if (*s == 's')
		ft_putstr_pf(va_arg(args, char *), count);
	else if (*s == 'p')
		ft_convert_ptr_pf(va_arg(args, void *), "0123456789abcdef", count);
	else if (*s == 'd')
		ft_itoa_pf(va_arg(args, int), count);
	else if (*s == 'i')
		ft_itoa_pf(va_arg(args, int), count);
	else if (*s == 'u')
		ft_itoa_unsigned_pf(va_arg(args, unsigned int), count);
	else if (*s == 'x')
		ft_itoa_base_pf(va_arg(args, int), "0123456789abcdef", count);
	else if (*s == 'X')
		ft_itoa_base_pf(va_arg(args, int), "0123456789ABCDEF", count);
	else if (*s == '%')
		ft_putchar_pf('%', count);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, s);
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			ft_convertion_printf(args, (char *)s, &count);
		}
		else
			ft_putchar_pf(*s, &count);
		s++;
	}
	va_end(args);
	return (count);
}
