char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[5] = "ABCD";
	char	*str2;

	str2 = ft_strlowcase(str);
	printf("%s", str2);
	return (0);
}*/
