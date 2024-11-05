/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_void_count.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:13:46 by luide-ca          #+#    #+#             */
/*   Updated: 2024/11/05 15:13:47 by luide-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	*ft_print_void_count(void *s, int *count)
{
	long long	address;
	char		buffer[18];
	int			i;
	int			digit;

	i = 17;
	buffer[18] = "0x000000000000000";
	address = (uintptr_t)s;
	while (i > 1)
	{
		digit = address % 16;
		buffer[--i] = digit;
		if (digit < 10)
			'0' + digit;
		else
			'a' + digit - 10;
		address /= 16;
	}
	count = ft_putstr_count(buffer, count);
	return (count);
}
