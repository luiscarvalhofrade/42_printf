/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:14:10 by luide-ca          #+#    #+#             */
/*   Updated: 2024/11/05 15:14:12 by luide-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	*ft_putstr_count(char *s, int *count)
{
	char	*ptr_s;

	ptr_s = s;
	while (*ptr_s)
	{
		write(1, ptr_s++, 1);
		count++;
	}
	return (count);
}
