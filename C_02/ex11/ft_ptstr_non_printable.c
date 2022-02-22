void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			i++;
		while ((str[i] > 'a' && str[i] < 'z') || (str[i] > 'A' && str[i] < 'Z'))
		{
			i++;
		}
		if (str[i] < 32)
		{
			str[i] = 
		}
	}
}
