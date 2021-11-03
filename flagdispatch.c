#include "libprintf.h"

void    flagdispatch(char *flags, va_list ap)
{
    while (*flags)
	{
		// if (*flags == 'c')
		// 	print_c(va_arg(ap, int));
		if (*flags == 's')
			print_s(va_arg(ap, char *));
		// if (*flags == 'p')
		// 	print_p(va_arg(ap, void *));
		// if (*flags == 'd')
		// 	print_d(va_arg(ap, long long));
		// if (*flags == 'i')
		// 	print_i(va_arg(ap, int));
		// if (*flags == 'u')
		// 	print_u(va_arg(ap, unsigned long long));
		// if (*flags == 'x')
		// 	print_hexa(va_arg(ap, long long), 'x');
		// if (*flags == 'X')
		// 	print_hexa(va_arg(ap, long long), 'X');
		// if (*flags == '%')
		// 	print_percent();
		flags++;
	}
}