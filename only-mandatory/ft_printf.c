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
			ft_transform(args, (char *)s, &count);
		}
		else
			ft_putchar_fd(*s, 1, &count);
		s++;
	}
	va_end(args);
	return (count);
}

void	ft_transform(va_list args, char *s, int *count)
{
	if (*s == 'c')
		ft_putchar_fd(va_arg(args, int), 1, count);
	else if (*s == 's')
		ft_trans_str(va_arg(args, char *), count);
	else if (*s == 'p')
		ft_trans_ptr(va_arg(args, void *), "0123456789abcdef", count);
	else if (*s == 'd')
		ft_trans_number(va_arg(args, int), count);
	else if (*s == 'i')
		ft_trans_number(va_arg(args, int), count);
	else if (*s == 'u')
		ft_trans_unsigned_number(va_arg(args, unsigned int), count);
	else if (*s == 'x')
		ft_trans_hex(va_arg(args, int), "0123456789abcdef", count);
	else if (*s == 'X')
		ft_trans_hex(va_arg(args, int), "0123456789ABCDEF", count);
	else if (*s == '%')
		ft_putchar_fd('%', 1, count);
}
