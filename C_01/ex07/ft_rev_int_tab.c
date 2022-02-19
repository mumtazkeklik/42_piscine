/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeklik <mkeklik@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 15:27:53 by mkeklik           #+#    #+#             */
/*   Updated: 2022/02/19 15:28:07 by mkeklik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while ((size / 2) > i)
	{
		ft_swap(&tab[size - (1 + i)], &tab[i]);
		i++;
	}
}

/*int	main(void)
{
	int	tab[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	int	i;
	int size;

	size = 10;
	ft_rev_int_tab(tab, 10);
	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	return(0);
}*/
