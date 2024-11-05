#include "libft.h"

char	*ft_utils_pf_width_control(char *result, pf_struct_i pf_i)
{
	if (pf_i.width != 0)
	{
		result = (char *)malloc((pf_i.width + 1) * sizeof(char));
		if (!result)
			return (0);
	}
	return (result);
}

void	ft_utils_alignement(pf_struct_i pf_i);
{
	set_zero_minus = "-"
	if (ft_strchr(set_zero_minus, pf_i.flags) != 0)
}

void	ft_utils_hex_treatment(pf_struct_i pf_i);
{
	if (pf_i.convertion == 'x' || pf_i.convertion == 'X')
	{
		if(ft_strchr(pf_i.flags, "#") != 0)
		{

		}
	}
}
void	ft_utils_first_house(pf_struct_i pf_i);
{
	set_pos_num = " +"
	if(ft_strchr(set_pos_num, pf_i.flags) != 0)
}