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

#include "libft.h"

int	ft_return_printf(va_list args, char *s)
{
	if (*s == 'c')
		ft_putchar_fd(va_arg(args, int), 1);
	else if (*s == 's')
		ft_putstr_fd(va_arg(args, char *), 1);
	else if (*s == 'p')
		ft_print_void(va_arg(args, void *));
	else if (*s == 'd')
		ft_itoa(va_arg(args, int));
	else if (*s == 'i')
		ft_itoa(va_arg(args, int));
	else if (*s == 'u')
		ft_itoa_unsigned(va_arg(args, unsigned int));
	else if (*s == 'x')
		ft_itoa_hexadec(va_arg(args, int), "x");
	else if (*s == 'X')
		ft_itoa_hexadec(va_arg(args, int), "X");
	else if (*s == '%')
		ft_putchar_fd('%', 1);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int	count;
	
	va_start(args, s);
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			ft_return_printf(args, (char *)s);
			ft_return_printf(args, s)
		}
		else
			ft_putchar_fd(*s, 1);
		s++;
	}
	va_end(args);
	return (count);
}
