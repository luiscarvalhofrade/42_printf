#include "ft_printf.h"

int	ft_count_ptr_nbr(unsigned long n)
{
	int				count;
	unsigned long	wres;

	count = 0;
	wres = n;
	if (n == 0)
		count = 1;
	else
	{
		while (wres != 0)
		{
			wres = wres / 16;
			count++;
		}
	}
	return (count);
}

char	*ft_convert_nbr_to_char_ptr(char *result, int i,
			unsigned long wres, char *base)
{
	int		j;

	j = i;
	if (wres == 0)
	{
		result[0] = base[0];
		result[1] = '\0';
		return (result);
	}
	while (wres > 0)
	{
		result[i - 1] = base[wres % 16];
		wres = wres / 16;
		i--;
	}
	result[j] = '\0';
	return (result);
}

void	ft_itoa_ptr_pf(unsigned long n, char *base, int *count)
{
	char				*result;
	int					i;
	unsigned long		wres;

	wres = n;
	i = ft_count_ptr_nbr(n);
	result = (char *)malloc(sizeof(char) * (i + 1));
	if (result == NULL)
		return ;
	if (n == 0)
	{
		free(result);
		ft_putchar_pf('0', count);
	}
	else
	{
		ft_convert_nbr_to_char_ptr(result, i, wres, base);
		ft_putstr_pf(result, count);
		free(result);
	}
}

void	ft_convert_ptr_pf(void *ptr, char *base, int *count)
{
	unsigned long	n;

	if (!ptr)
	{
		ft_putchar_pf('(', count);
		ft_putchar_pf('n', count);
		ft_putchar_pf('i', count);
		ft_putchar_pf('l', count);
		ft_putchar_pf(')', count);
	}
	else
	{
		n = (unsigned long)ptr;
		ft_putchar_pf('0', count);
		ft_putchar_pf('x', count);
		ft_itoa_ptr_pf(n, base, count);
	}
}
