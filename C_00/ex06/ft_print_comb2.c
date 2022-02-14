/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeklik <mkeklik@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:51:11 by mkeklik           #+#    #+#             */
/*   Updated: 2022/02/14 14:51:29 by mkeklik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	yaz(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	table(char num, char max)
{
	char	t;
	char	g;

	if (num <= 9)
	{
		t = num + 48;
		yaz('0', t);
	}
	else if (num <= max)
	{
		t = (num % 10) + 48;
		g = (num / 10) + 48;
		yaz(g, t);
	}
}

void	yazdir(char c, char d)
{
	table(c, 98);
	write(1, " ", 1);
	table(d, 99);
	if (c != 98 || d != 99)
	{
		write(1, ", ", 2);
	}
}

void	ana(void)
{
	char	e;
	char	f;

	e = 0;
	while (e <= 98)
	{
		f = e + 1;
		while (f <= 99)
		{
			yazdir(e, f);
			f++;
		}
		e++;
	}
}

int	main(void)
{
	ana();
	return (0);
}
