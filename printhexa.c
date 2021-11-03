#include "libprintf.h"
#include "libft.h"


void ft_putnbr_base(long long nb, char *base)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 16)
	{
		ft_putnbr(nb / 16, base);
		nb = nb % 16;
	}
	if (nb <= 16 && nb >= 0)
		ft_putchar(base[nb]);
}

void	print_hexa(long long hexaint, char c)
{
    if (c == 'x')
	    ft_putnbr_base(hexaint, "0123456789ABCDEF");
}
