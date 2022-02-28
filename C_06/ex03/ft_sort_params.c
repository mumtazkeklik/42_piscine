#include <unistd.h>
void	ft_swap(char *str1, char *str2)
{
	char	temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

char	*ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] == str2[i] && str1[i] && str2[i])
		i++;
	return (str1[i] - str2[i]);
}

int	main(int argc, char **argv)
{
	int	i;
	int	c;
	int	n;

	n = 0;
	while (n < argc)
	{
		c = 0;
		if (ft_strcmp(*argv[c], *argv[c + 1]) < 0)
		{
			ft_swap(*argv[c], *argv[c + 1]);
			c++;
		}
		else
			c++;

	}
	
}
