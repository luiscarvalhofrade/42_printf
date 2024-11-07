#include "ft_printf.h"

static int	ft_size_of_unsigned_int(unsigned int n)
{
	int	counter;

	counter = 1;
	while (n > 9)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}

void	ft_itoa_unsigned_pf(unsigned int n, int *count)
{
	char	value;

	value = 48 + (n % 10);
	
	if (n > 9)
		ft_itoa_unsigned_pf(n / 10, count);
	write(1, &value, 1);
	*count = (ft_size_of_unsigned_int(n) + 1);
}
