/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeklik <mkeklik@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:20:51 by mkeklik           #+#    #+#             */
/*   Updated: 2022/03/01 10:48:12 by mkeklik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0 && nb == 0)
		return (1);
	if (power > 0)
		return (nb * ft_recursive_power(nb, (power - 1)));
	return (1);
}
/*
#include <stdio.h>
int		main(void)
{
	printf("-3 ^-1 = %d (0)\n", ft_recursive_power(-3, -1));
	printf("-3 ^ 0 = %d (1)\n", ft_recursive_power(-3, 0));
	printf("-3 ^ 1 = %d (-3)\n", ft_recursive_power(-3, 1));
	printf("-3 ^ 2 = %d (9)\n", ft_recursive_power(-3, 2));
	printf("-3 ^ 3 = %d (-27)\n", ft_recursive_power(-3, 3));
	printf(" 0 ^-1 = %d (0)\n", ft_recursive_power(0, -1));
	printf(" 0 ^ 0 = %d (1)\n", ft_recursive_power(0, 0));
	printf(" 0 ^ 2 = %d (0)\n", ft_recursive_power(0, 2));
	printf(" 4 ^-1 = %d (0)\n", ft_recursive_power(4, -1));
	printf(" 4 ^ 0 = %d (1)\n", ft_recursive_power(4, 0));
	printf(" 4 ^ 1 = %d (4)\n", ft_recursive_power(4, 1));
	printf(" 4 ^ 2 = %d (16)\n", ft_recursive_power(4, 2));
	printf(" 4 ^ 3 = %d (64)\n", ft_recursive_power(4, 3));

}*/
