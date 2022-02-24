char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	c;
	char	*talipli;

	i = 0;
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			talipli = str + i;
			c = 0;
			while (str[i] == to_find[c] && str[i] && to_find[c])
			{
				i++;
				c++;
			}
			if (!to_find[c])
				return (talipli);
		}
		i++;
	}
	return (0);
}
