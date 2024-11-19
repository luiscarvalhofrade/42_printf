/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_unsignde_pf.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:32:02 by luide-ca          #+#    #+#             */
/*   Updated: 2024/11/07 13:32:03 by luide-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_unsigned_itoa(unsigned int n)
{
	char	*nbr;
	int		counter;

	counter = ft_size_of_unsigned_int(n);
	nbr = (char *)malloc((counter + 1) * sizeof(char));
	if (!nbr)
		return (0);
	if (n == 0)
		nbr[0] = '0';
	nbr[counter] = '\0';
	while (counter > 0 && n > 0)
	{
		nbr[--counter] = (n % 10) + '0';
		n /= 10;
	}
	return (nbr);
}

void	ft_convert_unsigned_nbr_pf(unsigned int n, int *count)
{
	char	*nbr;

	nbr = ft_unsigned_itoa(n);
	ft_trans_str(nbr, count);
	free(nbr);
}
