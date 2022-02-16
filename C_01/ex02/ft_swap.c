#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	term;

	term = *b;
	*b = *a;
	*a = term;
}
