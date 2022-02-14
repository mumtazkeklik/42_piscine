/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeklik <mkeklik@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 18:24:41 by mkeklik           #+#    #+#             */
/*   Updated: 2022/02/14 13:53:39 by mkeklik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	c_yaz(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if ((a != '7') || (b != '8') || (c != '9'))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	d;
	char	e;
	char	f;

	d = '0';
	while (d <= '7')
	{
		e = d + 1;
		while (e <= '8')
		{
			f = e + 1;
			while (f <= '9')
			{
				c_yaz(d, e, f);
				f++;
			}
			e++;
		}
		d++;
	}
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
