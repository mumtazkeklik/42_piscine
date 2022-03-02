#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	dest = (char*)malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
int	main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	char	*mine;
	char	*their;

	mine = ft_strdup(av[1]);
	their = strdup(av[1]);
	printf("mine  :%s: | their  :%s:\n", mine, their);
}
