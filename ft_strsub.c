#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*newstring;
	
	i = 0;
	if (!(newstring = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		newstring[i] = s[start + i];
		i++;
	}
	newstring[i] = 0;
	return (newstring);
}
