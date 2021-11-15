#include <stdarg.h>
#include <stdlib.h>

int		ft_printf(const char *, ...);

int		validateflag(int c);

char	*strcreate(const char *s, va_list ap);

char	*ft_substrfree(const char *s, unsigned int start, size_t len, char *tofree);

char	*dispatchflag(int c, va_list *ap, char *tofree);

char    *charjoinfree(char *tofree, int c);

char    *ft_strjoinfree(char *tofree, char *tojoin);

char    *itoahex(char c, char *tofree, long long num);