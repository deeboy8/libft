#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *p;
	int len;
	
	len = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);
	if (s1)
		p = ft_strcpy(p, s1);
	else 
		p = ft_strcpy(p, s2);
	if (s1 && s2)
		p = ft_strcat(p, s2);
	return (p);
}
