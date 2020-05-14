#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int numb;

	if (n < 0)
	{
		numb = -n;
		ft_putchar_fd('-', fd);
	}
	else
		numb = n;
	if (numb < 10)
		ft_putchar_fd(numb + '0', fd);
	else
	{
		ft_putnbr_fd(numb / 10, fd);
		ft_putchar_fd(numb % 10 + '0', fd);
	}
}




