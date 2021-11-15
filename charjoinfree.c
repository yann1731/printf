#include "libft.h"
#include "libprintf.h"

char    *charjoinfree(char *tofree, int c)
{
    char    *nstr;
    size_t  len;

    len = 0;
    nstr = malloc((ft_strlen(tofree) + 1) * sizeof(char));
    ft_strlcpy(nstr, tofree, ft_strlen(tofree) + 1);
    while(nstr[len])
        len++;
    nstr[len] = c;
    nstr[len + 1] = '\0';
    free(tofree);
    return (nstr);
}