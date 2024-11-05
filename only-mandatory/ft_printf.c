/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:56:12 by luide-ca          #+#    #+#             */
/*   Updated: 2024/10/29 15:56:13 by luide-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	*ft_return_printf(va_list args, char *s, int *count)
{
	if (*s == 'c')
		ft_putchar_count(va_arg(args, int), count);
	else if (*s == 's')
		ft_putstr_count(va_arg(args, char *), count);
	else if (*s == 'p')
		ft_print_void_count(va_arg(args, void *), count);
	else if (*s == 'd')
		ft_itoa_count(va_arg(args, int), count);
	else if (*s == 'i')
		ft_itoa_count(va_arg(args, int), count);
	else if (*s == 'u')
		ft_itoa_unsigned_count(va_arg(args, unsigned int), count);
	else if (*s == 'x')
		ft_itoa_hexadec_count(va_arg(args, int), 'x', count);
	else if (*s == 'X')
		ft_itoa_hexadec_count(va_arg(args, int), 'X', count);
	else if (*s == '%')
		ft_putchar_count('%', count);
	return (count);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, s);
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			count++;
			ft_return_printf(args, (char *)s, &count);
		}
		else
			ft_putchar_count(*s, &count);
		s++;
	}
	va_end(args);
	return (count);
}
