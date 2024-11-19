/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:32:59 by luide-ca          #+#    #+#             */
/*   Updated: 2024/11/07 13:33:00 by luide-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_pf(char *s, int *count)
{
	while (*s)
		ft_putchar_pf(*s++, count);
}

void	ft_trans_str(char *s, int *count)
{
	if (!s)
		ft_putstr_pf("(null)", count);
	else
		ft_putstr_pf(s, count);
}
