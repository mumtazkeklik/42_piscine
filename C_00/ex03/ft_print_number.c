/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeklik <mkeklik@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 15:34:09 by mkeklik           #+#    #+#             */
/*   Updated: 2022/02/13 15:38:04 by mkeklik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	x;

	x = '9';
	while (x >= '0' )
	{
		write(1, &x, 1);
		x--;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
