#include "libprintf.h"
#include "libft.h"
#include <stdio.h>

//va_arg, va_start, va_end, va_copy

int	ft_printf(const char *s, ...)
{
	char	*flags;
	va_list	ap;

	flags = get_flags(s);
	va_start(ap, s);
	while (*flags)
	{
		if (*flags == 'c')
			print_c(va_arg(ap, char));
		if (*flags == 's')
			print_s(va_arg(ap, char *));
		if (*flags == 'p')
			print_p(va_arg(ap, void *));
		if (*flags == 'd')
			print_d(va_arg(ap, long long));
		if (*flags == 'i')
			print_i(va_arg(ap, int));
		if (*flags == 'u')
			print_u(va_arg(ap, unsigned long long));
		if (*flags == 'x')
			print_hexa(va_arg(ap, long long), 'x');
		if (*flags == 'X')
			print_hexa(va_arg(ap, long long), 'X');
		if (*flags == '%')
			print_percent();
		flags++;
	}
}