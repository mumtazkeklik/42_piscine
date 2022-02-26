/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeklik <mkeklik@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 10:24:30 by mkeklik           #+#    #+#             */
/*   Updated: 2022/02/26 10:24:57 by mkeklik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (('A' > str[i]) || (str[i] > 'Z' && 'a' > str[i]) || (str[i] > 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	if (ft_str_is_alpha("ahmet1"))
		write (1, "true\n", 5);
	else
		write (1, "false\n", 6);
	return (0);
}*/
