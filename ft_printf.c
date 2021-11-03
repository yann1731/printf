#include "libprintf.h"
#include "libft.h"
#include <stdio.h>

//va_arg, va_start, va_end, va_copy

int	ft_printf(const char *s, ...)
{
	char	*flags;
	va_list	ap;

	flags = get_flags(s);
	if (flags == NULL)
		return (0);
	va_start(ap, s);
	flagdispatch(flags, ap);
	va_end(ap);
	return (1);
}