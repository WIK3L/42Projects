/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikegonz <mikegonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 00:43:34 by mikegonz          #+#    #+#             */
/*   Updated: 2023/12/15 20:08:39 by mikegonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dest_int;
	char	*src_int;

	dest_int = (char *)dest;
	src_int = (char *)src;
	i = 0;
	if (dest == src)
		return (dest);
	while (i < n)
	{
		dest_int[i] = src_int[i];
		i++;
	}
	return (dest);
}
