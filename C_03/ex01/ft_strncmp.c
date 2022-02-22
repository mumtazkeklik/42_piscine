#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s1[count] != '\0')
		count++;
	if (n <= count)
	{
		while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
		{
			if (i <= n)
				i++;
		}
	}
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char	s1[10] = "ankara";
	char	s2[10] = "antalya";
	unsigned int	result;
	unsigned int	n;

	n = 3;
	result = ft_strncmp(s1, s2, n);
	if (result == 0)
		printf("(%s) == (%s)\n", s1, s2);
	else if (result < 0)
		printf("(%s) < (%s)\n", s1, s2);
	else
		printf("(%s) > (%s)\n", s1, s2);
	return (0);
}
