/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexadec_fd.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:58:52 by luide-ca          #+#    #+#             */
/*   Updated: 2024/10/30 14:58:53 by luide-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	*ft_itoa_hexadec_count(int n, char x_o_X, int *count)
{
	char	*hex;
	int 	index = 0;
	int 	remainder;
	int 	i;
	int		alpha;

	index = 0;
	hex = (char *)malloc(12 * sizeof(char));
	if (x_o_X == 'x')
		alpha = 87;
	else if (x_o_X == 'X')
		alpha = 65;
	if (n == 0)
	{
		write(1, "\0", 1);
		return (0);
	}
	while (n != 0) 
	{
		remainder = n % 16;
		if (remainder < 10)
			hex[index++] = 48 + remainder;
		else
			hex[index++] = alpha + remainder;
		n /= 16;
	}
	i = index - 1;
	while (i >= 0)
		write(1, &hex[i--], 1);
	free(hex);
	*count = (index - 1);
	return (count);
}
