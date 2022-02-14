/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alfabet.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeklik <mkeklik@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:53:33 by mkeklik           #+#    #+#             */
/*   Updated: 2022/02/12 17:27:09 by mkeklik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	x;

	x = 'a';
	while (x <= 'z' )
	{
		write(1, &x, 1);
		x++;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
}*/
