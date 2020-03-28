#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;
	
	i =0;
	if ((ft_strncmp(s1, s2, n) != 0) && i < n)
		return (0);
	else
		return (1);
}
