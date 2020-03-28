#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *p;
	size_t i;
	
	i = 0;
	p = (char *)malloc(sizeof(char) * (size + 1));
	if (p == NULL)
		return (NULL);
	while (i < size)
	{
		p[i] = '\0';
		i++;
	}
	return (p);


}
