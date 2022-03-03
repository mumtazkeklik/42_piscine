/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeklik <mkeklik@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 17:37:09 by mkeklik           #+#    #+#             */
/*   Updated: 2022/03/03 18:43:38 by mkeklik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	r;
	int	i;
	int	sign;

	sign = 1;
	i = 0;
	r = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = (r * 10) + (str[i] - '0');
		i++;
	}
	return (sign * r);
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int	mine;
	int	their;

	if (ac == 2)
	{
		mine = ft_atoi(av[1]);
		their = atoi(av[1]);
		printf("mine : %d   |   their : %d\n", mine , their);
	}
}*/
