#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s)
{
	char	*p;
	unsigned int start;
	unsigned int end;
	unsigned int length;

	start = 0;
	if (!s)
		return (NULL);
	length = (unsigned int)ft_strlen(s); 
	while (ft_whitespace(s[start]))
		start++;
	//printf("Start value is: %u\n", start);
	end = length;
	//printf("The total length/end is: %u\n", end);
	if (length > start)
	{
		while (ft_whitespace(s[end]))
		end--;
	}
	//printf("%u, %u\n", end, start);
	length = end - start;
	p = (char *)malloc(sizeof(char) * ((length) + 1));
	if (p == NULL)
		return (NULL);
	p = (ft_strncpy(p, (char *)s + start, length));
	return (p);
	
}

