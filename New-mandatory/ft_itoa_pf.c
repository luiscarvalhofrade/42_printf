#include "ft_printf.h"

static int	ft_size_of_int(int n)
{
	int	counter;

	counter = 1;
	if (n < 0)
	{
		counter++;
		n *= -1;
	}
	while (n > 9)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}

void	ft_itoa_pf(int n, int *count)
{
	char	value;

	value = 48 + (n % 10);
	if (n == -2147483648)
	{
		ft_itoa_pf(n / 10, count);
		write(1, "8", 1);
	}
	else if (n < 0)
	{
		write(1, "-", 1);
		ft_itoa_pf(-n, count);
	}
	else
	{
		if (n > 9)
			ft_itoa_pf(n / 10, count);
		write(1, &value, 1);
	}
	if (n == -2147483648)
		*count = 12;
	else
		*count = (ft_size_of_int(n) + 1);
}
