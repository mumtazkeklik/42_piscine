/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeklik <mkeklik@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 11:01:11 by mkeklik           #+#    #+#             */
/*   Updated: 2022/03/02 13:16:29 by mkeklik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*d;
	int	i;

	if (min >= max)
		return ((void *)0);
	i = (max - min);
	d = (int *)malloc(sizeof(int) * i);
	if (d == (void *)0)
		return ((void *)0);
	i = 0;
	while (min + i < max)
	{
		d[i] = min + i;
		i++;
	}
	return (d);
}

#include <stdio.h>
void	ft_putstr(int *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		printf("%d ", str[i]);
		i++;
	}
	printf("\n");
}
int	main(void)
{
	int	*dizi;

	dizi = ft_range(25, 21);
	ft_putstr(dizi);
}
