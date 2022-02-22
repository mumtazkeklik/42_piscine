#include <stdio.h>
#include <unistd.h>

int	ft_islower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	ft_isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	ft_issep(char c)
{
	return (c == ' ' || c == '+' || c == '-');
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (ft_issep(str[i]))
		i++;
	while (str[i])
	{
		if (ft_islower(str[i]))
			str[i] -= 32;
		while (!ft_issep(str[++i]) && str[i])
			if (ft_isupper(str[i]))
				str[i] += 32;
		while (ft_issep(str[i]))
			i++;
	}
	return (str);
}

int	main(void)
{
	char	str[50] = "ah kEklIk+hjeksSVFdcfsd-ShdcSDFgeg";
	char	*ret;

	ret = ft_strcapitalize(str);
	printf("%s\n", ret);
	return (0);
}
