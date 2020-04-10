#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	ft_getnumbersize(unsigned int n)
{
	unsigned int size;

	size = 0;
	while (n >= 10)
	{
		n /= 10;
		++size;
	}
	return (size + 1);
}

char	*ft_itoa(int n)
{
	unsigned int size;
	char *newstring;
	unsigned int index;
	unsigned int numb;

	if (n < 0)
		numb = (unsigned int)(n * -1);
	else 
		numb = (unsigned int)n;
	size = (unsigned int)ft_getnumbersize(numb);
	newstring = (char *)malloc(size + 1 + (n < 0 ? 1 : 0));
	if (newstring == NULL)
		return (NULL);
	index = 0;
	if (n < 0 && (newstring[index] = '-'))
		size++;
	index = size - 1;
	while (numb >= 10)
	{
		newstring[index] = (char)(numb % 10 + 48);
		numb = numb / 10;
		index--;
	}
	newstring[index] = (char)(numb % 10 + 48);
	newstring[size] = '\0';
	return (newstring);
}		
