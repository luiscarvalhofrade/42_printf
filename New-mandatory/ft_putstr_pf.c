#include "ft_printf.h"

void	ft_putstr_pf(char *s, int *count)
{
	while (*s)
		ft_putchar_pf(*s++, count);
}
