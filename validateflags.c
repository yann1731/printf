#include "libprintf.h"

int	validateflags(const char *s)
{
	while (*s)
	{
		if (*s != 'c' && *s != 's' && *s != 'p' && *s != 'd'
			&& *s != 'i' && *s != 'u' && *s != 'x' && *s != 'X' && *s != '%')
		{
			return (0);
		}
		s++;
	}
	return (1);
}