#include "libprintf.h"

int	validateflags(int c)
{
		if (c != 'c' && c != 's' && c != 'p' && c != 'd'
			&& c != 'i' && c != 'u' && c != 'x' && c != 'X' && c != '%')
			return (0);
	return (1);
}