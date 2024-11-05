/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:14:45 by luide-ca          #+#    #+#             */
/*   Updated: 2024/10/31 17:14:54 by luide-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_size_of_unsigned_int(int n)
{
	int	counter;

	counter = 1;
	if (n < 0)
		n *= -1;
	while (n > 9)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}

int	*ft_itoa_unsigned_count(int n, int *count)
{
	char	*nbr;
	int		counter;

	counter = ft_size_of_unsigned_int(n);
	nbr = (char *)malloc((counter + 1) * sizeof(char));
	if (!nbr)
		return (0);
	if (n < 0)
		n *= -1;
	if (n == 0)
		nbr[0] = '0';
	nbr[counter] = '\0';
	while (counter > 0 && n > 0)
	{
		nbr[--counter] = (n % 10) + '0';
		n /= 10;
	}
	count = ft_putstr_count(nbr, count);
	return (count);
}
