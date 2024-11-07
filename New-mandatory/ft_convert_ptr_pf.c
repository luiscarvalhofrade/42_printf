/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_ptr_pf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:31:15 by luide-ca          #+#    #+#             */
/*   Updated: 2024/11/07 13:31:17 by luide-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_size_of_ptr(unsigned long n)
{
	int	counter;

	counter = 0;
	if (n == 0)
		counter = 1;
	else
	{
		while (n != 0)
		{
			n = n / 16;
			counter++;
		}
	}
	return (counter);
}

static char	*ft_convert_nbr_to_char_ptr(char *result, int i,
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

static void	ft_itoa_ptr_pf(unsigned long n, char *base, int *count)
{
	char				*result;
	int					i;
	unsigned long		wres;

	wres = n;
	i = ft_size_of_ptr(n);
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
		ft_putstr_pf("(nil)", count);
	else
	{
		n = (unsigned long)ptr;
		ft_putchar_pf('0', count);
		ft_putchar_pf('x', count);
		ft_itoa_ptr_pf(n, base, count);
	}
}
