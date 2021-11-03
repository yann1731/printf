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
		if (s[index] == '%' && s[index - 1] != '%' && validateflags(s[index + 1] == 1))
		{
			rstr = dispatchflag(va_arg)
		}
		rstr = ft_substrfree(s, index, 1, rstr);
		index++;
	}
}