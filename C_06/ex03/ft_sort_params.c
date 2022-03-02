/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeklik <mkeklik@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 19:17:53 by mkeklik           #+#    #+#             */
/*   Updated: 2022/03/01 19:20:44 by mkeklik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char p)
{
	write(1, &p, 1);
}

void	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_swap(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] == str2[i] && str1[i] && str2[i])
		i++;
	return (str1[i] - str2[i]);
}

int	main(int argc, char **argv)
{
	int	t;
	int	a;

	a = 1;
	while (a < (argc - 1))
	{
		t = 1;
		while (t < (argc - 1))
		{
			if (ft_strcmp(argv[t], argv[t + 1]) > 0)
				ft_swap(&argv[t], &argv[t + 1]);
			t++;
		}
		a++;
	}
	t = 1;
	while (t < argc)
	{
		ft_putstr(argv[t]);
		ft_putchar('\n');
		t++;
	}
	return (0);
}
