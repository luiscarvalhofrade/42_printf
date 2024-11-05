/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:51:05 by luide-ca          #+#    #+#             */
/*   Updated: 2024/11/05 15:51:06 by luide-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"

int	ft_printf(const char *s, ...);
int	*ft_itoa_count(int n, int *count);
int	*ft_itoa_hexadec_count(int n, char x_o_X, int *count);
int	*ft_itoa_unsigned_count(int n, int *count);
int	*ft_print_void_count(void *s, int *count);
int	*ft_putchar_count(char c, int *count);
int	*ft_putstr_count(char *s, int *count);

#endif
