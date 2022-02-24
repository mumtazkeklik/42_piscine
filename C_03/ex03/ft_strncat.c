#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	c;

	i = ft_strlen(dest);
	c = 0;
	while (src[c] != '\0' && c < nb)
	{
		dest[i] = src[c];
		i++;
		c++;
	}
	while (c < nb)
	{
		dest[i] = '\0';
		i++;
		c++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dest[25] = "ahm";
	char	src[5] = "et25";
	char	*str;

	str = ft_strncat(dest, src, 2);
	printf("%s\n", str);
	return (0);
}*/
