#include <unistd.h>

void	print_mirror(char c)
{
	if (c <= 'z' && c >= 'a')
		c = 'z' - (c - 'a');
	if (c <= 'Z' && c >= 'A')
		c = 'Z' - (c - 'A');
	write(1, &c, 1);
}

int	main(int  ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
			print_mirror(av[1][i++]);
		write(1, "\n", 1);
	}
}
