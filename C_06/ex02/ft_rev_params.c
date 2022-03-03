/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeklik <mkeklik@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 19:18:40 by mkeklik           #+#    #+#             */
/*   Updated: 2022/03/03 16:11:41 by mkeklik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	c;

	if (argc <= 1)
		return (0);
	i = argc - 1;
	while (i > 0)
	{
		c = 0;
		while (argv[i][c] != '\0')
		{
			write(1, &argv[i][c], 1);
			c++;
		}
		i--;
		write(1, "\n", 1);
	}
}
