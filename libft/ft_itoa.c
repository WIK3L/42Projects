/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikegonz <mikegonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 20:19:59 by mikegonz          #+#    #+#             */
/*   Updated: 2023/12/23 21:33:18 by mikegonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_number(int n)
{
	size_t	index;

	index = 1;
	if (n < 0)
		index++;
	while (n > 9 || n < -9)
	{
		n = n / 10;
		index++;
	}
	return (index);
}

static char	*convert_number_to_string(int n, char *number, size_t i)
{
	number[i--] = '\0';
	if (n < 0)
		n = n * -1;
	while (n > 9)
	{
		number[i--] = n % 10 + '0';
		n = n / 10;
	}
	number[i] = n + '0';
	if (i != 0)
		number[--i] = '-';
	return (number);
}

char	*ft_itoa(int n)
{
	char	*number;
	size_t	i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = ft_count_number(n);
	number = (char *)ft_calloc(i + 1, sizeof(char));
	if (!(number))
		return (NULL);
	number = convert_number_to_string(n, number, i);
	return (number);
}
