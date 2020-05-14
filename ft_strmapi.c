#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int	i;
	char	*ptr;
	char	*ptr1;
	char	*result;
	
	i = 0;
	if (!s)
		return (NULL);
	result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (result == NULL)
		return (NULL);
	ptr = (char *)s;
	ptr1 = result;
	while (*ptr != '\0')
		*(ptr1++) = f(i++, *(ptr++));
	return (result);
}
