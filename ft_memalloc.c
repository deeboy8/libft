#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *p;

	p = (void *)malloc(size);
	if (p == NULL)
		return (NULL);
	p = ft_memset(p, 0, size);		
	return (p);
}
	
