#include "libpf.h"

pf_struct_i	ft_pf_control(char *s)
{
	pf_struct_i   pf_i;
	char	*ptr_s;

	ptr_s = s;
	if (*ptr_s)
	{
		if (ft_strchr(" -+#0", ptr_s) != 0)
		{
			*pf_i.flags = *ptr_s;
			ptr_s++;
			pf_i.flags++;
		}
		if (ft_strchr("123456789", ptr_s) != 0)
			pf_i.width = ft_atoi(ptr_s);
		if (ft_strchr(ptr_s, '.') != 0)
		{
			ptr_s++;
			pf_i.precision = ft_atoi(ptr_s);
		}
		if (ft_strchr("cspdiuxX%", ptr_s) != 0)
			pf_i.convertion = ptr_s;
	}
    return (pf_i);
}