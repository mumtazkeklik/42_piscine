#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*d;
	int	i;

	if (min >= max)
		return ((void *)0);
	i = (max - min);
	d = (int *)malloc(sizeof(int) * i);
	if (d == (void *)0)
		return (0);
	i = 0;
	while (min + i < max)
	{
		d[i] = min + i;
		i++;
	}
	return (d);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
		return (0);
	*range = ft_range(min, max);
	return (max - min);
}


