/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeklik <mkeklik@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:51:09 by mkeklik           #+#    #+#             */
/*   Updated: 2022/02/12 17:52:17 by mkeklik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	x;

	x = 'z';
	while (x >= 'a' )
	{
		write(1, &x, 1);
		x--;
	}
}

/*int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}*/
