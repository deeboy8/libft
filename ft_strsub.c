#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *p;

	p = (char *)malloc(sizeof(char) * (len + 1));
	if (p == NULL || s == NULL)
		return (NULL);
	p = ft_strncpy(p, (char *)s + start, len);
	return (p);
}
