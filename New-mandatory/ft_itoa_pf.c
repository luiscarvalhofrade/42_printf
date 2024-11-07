/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_pf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:31:42 by luide-ca          #+#    #+#             */
/*   Updated: 2024/11/07 13:31:43 by luide-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_size_of_int(int n)
{
	int	counter;

	counter = 0;
	if (n == 0)
		counter = 1;
	else
	{
		if (n < 0)
		{
			n *= -1;
			counter++;
		}
		while (n != 0)
		{
			n /= 10;
			counter++;
		}
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
	*count = (ft_size_of_int(n) + 1);
}
