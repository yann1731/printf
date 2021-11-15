#include "libprintf.h"
#include "libft.h"

char    *ft_strjoinfree(char *tofree, char *tojoin)
{
    char    *nstr;

    nstr = ft_strjoin(tofree, tojoin);
    free(tofree);
    return (nstr);
}