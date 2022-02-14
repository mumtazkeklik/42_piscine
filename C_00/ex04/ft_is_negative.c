/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeklik <mkeklik@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 15:50:23 by mkeklik           #+#    #+#             */
/*   Updated: 2022/02/13 15:50:57 by mkeklik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(char n)
{
	if (n < '0')
		write(1, "N", 1);
	else if (n >= '0')
		write(1, "P", 1);
}

/*int	main(void)
{
	ft_is_negative(-5);
	return (0);
}*/
