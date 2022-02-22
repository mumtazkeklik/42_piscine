#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	if (ft_str_is_lowercase(""))
		write(1, "true\n", 5);
	else
		write(1, "false\n", 6);
	return (0);
}*/
