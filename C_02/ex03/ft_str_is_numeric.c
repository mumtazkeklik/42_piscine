#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	if (ft_str_is_numeric("1234a"))
		write(1, "true\n", 5);
	else
		write(1, "false\n", 6);
	return (0);
}*/
