/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeklik <mkeklik@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 15:52:35 by mkeklik           #+#    #+#             */
/*   Updated: 2022/02/19 16:45:50 by mkeklik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	c;

	c = size;
	while (c > 0)
	{
		i = 0;
		while (i < size)
		{
			if (tab[i] > tab[i + 1])
				ft_swap(&tab[i], &tab[i + 1]);
			i++;
		}
		c--;
	}
}

/*int	main(void)
{
	int	tab[5] = {7, 9, 5, 1, 4};
	int	i;

	i = 0;
	ft_sort_int_tab(tab, 5);
	while(i < 5)
	{
	printf("%d", tab[i]);
	i++;
	}
	return(0);
}*/
