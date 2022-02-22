#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((65 > str[i]) || (str[i] > 90) && (97 > str[i]) || (str[i] > 122))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	if (ft_str_is_alpha("ahmet1"))
		write (1, "true\n", 5);
	else
		write (1, "false\n", 6);
	return (0);
}*/
