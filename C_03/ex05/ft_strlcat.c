/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeklik <mkeklik@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 14:40:25 by mkeklik           #+#    #+#             */
/*   Updated: 2022/02/26 14:40:27 by mkeklik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (*str != '\0')
	{
		str++;
		counter++;
	}
	return (counter);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	c;

	if (ft_strlen(dest) >= size)
		return (ft_strlen(src) + size);
	i = ft_strlen(dest);
	c = 0;
	while (src[c] != '\0' && c < (size - 1))
	{
		dest[i] = src[c];
		i++;
		c++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[c]));
}
