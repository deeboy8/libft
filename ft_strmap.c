#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{	
	char	*ptr;
	char	*ptr1;
	char	*result;
	
	if (!s)
		return (NULL);
	result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (result == NULL)
		return (NULL);
	ptr = (char *)s;
	ptr1 = result;
	while (*ptr != '\0')
		*(ptr1++) = f(*(ptr++));
	return (result);
}
