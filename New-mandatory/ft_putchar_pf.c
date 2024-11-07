#include "ft_printf.h"

void	ft_putchar_pf(char n, int *count)
{
	write(1, &n, 1);
	*count += 1;
}
