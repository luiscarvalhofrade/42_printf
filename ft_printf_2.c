#include "libft.h"

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int	count;
	
    count = 0;
	va_start(args, s);
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			ft_utils_pf_flags_control(args, (char *)s, &count);
		}
		else
			ft_putchar_count(*s, 1, &count);
		s++;
	}
	va_end(args);
	return (count);
}