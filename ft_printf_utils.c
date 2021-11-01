#include "libft.h"
#include "libprintf.h"

char    *get_flags(const char *s)
{
	char    *flags;
	int     index;
	int		count;

	count = 0;
	index = 0;
	while (s[index])
	{
		if (s[index] == '%')
			count++;
		index++;
	}
	index = 0;
	flags = malloc(count * sizeof(char));
	while (*s)
	{
		if (*s == '%')
			flags[index++] = *(s + 1);
		s++;
	}
	return (flags);
}
