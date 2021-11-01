#include "ft_printf.h"
#include "libft.h"
#include <stdarg.h>
#include <decimal.h>

//va_arg, va_start, va_end, va_copy

void	print_c(int c)
{
	ft_putchar_fd(c, 1);
}

void	print_s(char *s)
{
	ft_putstr(s, 1);
}

void	print_d(long long d)
{
	ft_putnbr_fd()
}

void	printf_i(int i)
{

}

void	print_p(void *ptr)
{

}

int	ft_printf(const char *s, ...)
{
	va_list	ap;

	va_start(ap, s);


}