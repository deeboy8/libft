int	ft_getnumbersize(unsigned int n)
{
	unsigned int size;

	size = 0;
	while (n > 0)
	{
		n/= 10;
		size++;
	}
	return (size);
}
