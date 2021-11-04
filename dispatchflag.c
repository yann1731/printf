#include "libft.h"
#include "libprintf.h"

char	*dispatchflag(int c, va_list ap, char *tofree)
{
	char	*str;

	if (c == 'c')
		str = ft_strjoin(tofree, va_arg(ap, char));
	if (c == 's')
		str = ft_strjoin(tofree, va_arg(ap, char *));
	if (c == 'd')
		str = ft_strjoin(tofree, va_arg(ap, long long));
	if (c == 'p')
		str = ft_strjoin(tofree, va_arg(ap, void *));
	if (c == 'i')
		str = ft_strjoin(tofree, va_arg(ap, int));
	if (c == '')
}