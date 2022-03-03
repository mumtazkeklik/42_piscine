#include <unistd.h>

int	main(int ac, char **av)
{
	int	s[256] = {0};
	int	i;

	if (ac != 3)
		return (0);
	i = 0;
	while (av[2][i])
		s[(int)av[2][i++]] = 1;
	i = 0;
	while (av[1][i])
	{
		if (s[(int)av[1][i]] == 1)
		{
			write(1, &av[1][i], 1);
			s[(int)av[1][i]] = 2;
		}
		i++;
	}
} 
