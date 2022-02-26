/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeklik <mkeklik@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 11:57:29 by mkeklik           #+#    #+#             */
/*   Updated: 2022/02/26 14:46:10 by mkeklik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		c;
	char	*s;

	i = 0;
	while (str[i])
	{
		if (str[i] == to_find[0])
		{	
			s = str + i;
			c = 0;
			while (str[i] == to_find[c] && str[i] && to_find[c])
			{
				i++;
				c++;
			}
			if (!to_find[c])
				return (s);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str = "123456";
	char	to_find = "234";
	char	*str2;

	str2 = ft_strstr(str, to_find);
	printf("%s\0", str2);
	return (0);
}*/
