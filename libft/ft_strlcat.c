/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikegonz <mikegonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 00:44:35 by mikegonz          #+#    #+#             */
/*   Updated: 2023/12/30 21:51:54 by mikegonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	counter_dest;
	unsigned int	counter_src;
	unsigned int	counter;

	counter = 0;
	counter_src = 0;
	counter_dest = 0;
	while (dest[counter_dest])
		counter_dest++;
	while (src[counter_src])
		counter_src++;
	if (size <= counter_dest)
		counter_src += size;
	else
		counter_src += counter_dest;
	while (src[counter] && (counter_dest + 1) < size)
	{
		dest[counter_dest] = src[counter];
		counter++;
		counter_dest++;
	}
	dest[counter_dest] = '\0';
	return (counter_src);
}
