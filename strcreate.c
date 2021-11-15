#include "libprintf.h"
#include "libft.h"

char	*strcreate(const char *s, va_list ap)
{
	char	*rstr;
	size_t	index;

	index = 0;
	rstr = malloc(sizeof(char));
	while (*s)
	{
		if (*s == '%' && *(s - 1) != '%' && validateflag(*(s + 1)) == 1)
		{
			rstr = dispatchflag(*(s + 1), &ap, rstr);
			s += 2;
		if (*s == '\0')
			break;
		}
		rstr = charjoinfree(rstr, *s);
		s++;
	}
	return (rstr);
}