/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_pf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:31:28 by luide-ca          #+#    #+#             */
/*   Updated: 2024/11/07 13:31:29 by luide-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_size_of_hex(unsigned int n)
{
	int	counter;

	counter = 0;
	if (n == 0)
		counter = 1;
	else
	{
		while (n != 0)
		{
			n /= 16;
			counter++;
		}
	}
	return (counter);
}

static char	*ft_convert_n_to_hex(char *result, int i,
			unsigned int n, char *base)
{
	int	j;

	j = i;
	if (n == 0)
	{
		result[0] = base[0];
		result[1] = '\0';
		return (result);
	}
	while (n > 0)
	{
		result[i - 1] = base[n % 16];
		n /= 16;
		i--;
	}
	result[j] = '\0';
	return (result);
}

void	ft_itoa_base_pf(int n, char *base, int *count)
{
	char	*result;
	int		i;

	i = ft_size_of_hex(n);
	result = (char *)malloc(sizeof(char) * (i + 1));
	if (result == NULL)
		return ;
	if (n == 0)
	{
		free(result);
		ft_putchar_pf('0', count);
	}
	else
	{
		ft_convert_n_to_hex(result, i, n, base);
		ft_putstr_pf(result, count);
		free(result);
	}
}
