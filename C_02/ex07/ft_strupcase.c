/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeklik <mkeklik@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 10:32:38 by mkeklik           #+#    #+#             */
/*   Updated: 2022/02/26 10:32:41 by mkeklik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[20] = "dlahadvcDHSVCLSDVCA";
	char	*new_str;

	new_str = ft_strupcase(str);
	printf("%s\n", new_str);
	return (0);
}*/
