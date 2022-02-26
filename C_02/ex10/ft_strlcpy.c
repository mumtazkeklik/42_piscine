/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeklik <mkeklik@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 11:08:57 by mkeklik           #+#    #+#             */
/*   Updated: 2022/02/26 11:09:00 by mkeklik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	say;
	unsigned int	i;

	i = 0;
	say = 0;
	while (src[say] != '\0')
		say++;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (say);
}
/*
#include <stdio.h>

int	main(void)
{
	char	src[13] = "karmaisabitch";
	char	dest[25] = "ahmet";
	unsigned int	n;
	unsigned int	c;

	n = 5;
	c = ft_strlcpy(dest, src, n);
	printf("%s\n", dest);
	return (0);
}*/
