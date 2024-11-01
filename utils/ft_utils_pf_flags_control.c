/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_pf_flags_control.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 13:24:50 by luide-ca          #+#    #+#             */
/*   Updated: 2024/11/01 13:24:51 by luide-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_utils_pf_flags_control(char *s, pf_struct_i)
{
	pf_struct_i   pf_i;
	char    *set_convertion;
	char    *set_dig_n_z;
	char	*set_flags;

	set_convertion = "cspdiuxX%";
	set_dig_n_z = "123456789";
	set_flags = " -+#0";
	while (*s)
	{
		if (ft_strchr(set_flags, s) != 0 && ft_strchr(s, '.') != 0)
			*pf_i.flags = *s;
		if (ft_strchr(set_dig_n_z, s) != 0 && ft_strchr(s, '.') != 0)
			pf_i.width = ft_atoi(s);
		if (ft_strchr(s, '.') != 0)
			s++;
			pf_i.precision = ft_atoi(s);
		if (ft_strchr(set_convertion, s))
			pf_i.convertion = ft_strchr(set_convertion, s);
			return ;
		s++;
	}
}
