#include "libprintf.h"
#include "libft.h"
#include <stdio.h>

//va_arg, va_start, va_end, va_copy

int	ft_printf(const char *s, ...)
{
	char	*rstr;
	va_list	ap;
	rstr = strcreate(s, ap);
	
}