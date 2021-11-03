#include <stdarg.h>
#include <stdlib.h>

int		ft_printf(const char *, ...);

char    *get_flags(const char *s);

void	print_c(int c);

void	print_s(char *s);

void	print_d(long long d);

void	print_i(int i);

void	print_p(void *ptr);

void	print_u(unsigned long long uint);

void	print_hexa(long long hexaint, char c);

void	print_percent(void);

int		validateflags(const char *s);

void    flagdispatch(char *flags, va_list ap);