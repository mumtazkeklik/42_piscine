int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char	*ft_strcat(char *dest, char src*)
{
	int	i;

	i = ft_strlen(dest);
	while (*src != '\0')
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	src[6] = "ahmet";
	char	dest[6] = "talha";

	ft_strcat(dest, src);
	printf("%s\n", dest);
	return (0);
}*/
