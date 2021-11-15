#include "libft.h"
#include "libprintf.h"

char	*dispatchflag(int c, va_list *ap, char *tofree)
{
	char	*str;

	if (c == 'c')
		return (str = charjoinfree(tofree, va_arg(*ap, int)));
	if (c == 's')
		return (str = ft_strjoinfree(tofree, va_arg(*ap, char *)));
	if (c == 'd')
		return (str = ft_strjoinfree(tofree, ft_itoa(va_arg(*ap, long long))));
	if (c == 'p')
		return (str = ft_strjoin(tofree, va_arg(*ap, void *)));
	if (c == 'i')
		return (str = ft_strjoin(tofree, ft_itoa(va_arg(*ap, int))));
	//if (c == 'u')
		//return (str = )
	//if (c == 'x' || c == 'X')
	//	return (str = itoahex(c, tofree, va_arg(*ap, long long)));
	if (c == '%')
		return (str = charjoinfree(tofree, '%'));
	return (NULL);
}