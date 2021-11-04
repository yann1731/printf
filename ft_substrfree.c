#include "libft.h"
#include "libprintf.h"

char	*ft_substrfree(const char *s, unsigned int start, size_t len, char *tofree)
{
	size_t	i;
	char	*rs;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s) || len == 0)
		return (ft_strdup(""));
	while (i < len && s[i])
		i++;
	rs = malloc((i + 1) * sizeof(char));
	if (rs == NULL)
		return (NULL);
	ft_strlcpy(rs, s + start, len + 1);
	free(tofree);
	return (rs);
}