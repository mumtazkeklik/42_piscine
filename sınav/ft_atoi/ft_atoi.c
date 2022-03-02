#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	r;
	int	size;

	size = 1;
	i = 0;
	while (str[i] == 32 || (str[i] <= 13 && str[i] >= 9))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			size *= -1;
		i++;
	}
	r = 0;
	if (str[i] >= '0' && str[i] <= '9')
	{
		while (str[i])
		{
			r = r * 10 + (str[i] - '0');
			i++;
		}
	}
	return (r * size);
}

int	main(int ac, char **av)
{
	int	mine;
	int	their;

	if (ac != 2)
		return (0);
	mine = ft_atoi(av[1]);
	their = atoi(av[1]);
	printf("mine : %d   |   their : %d", mine, their);
}
