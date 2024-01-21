/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikegonz <mikegonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 20:16:12 by mikegonz          #+#    #+#             */
/*   Updated: 2023/12/15 20:37:09 by mikegonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *source, int c, size_t n)
{
	unsigned char	*source_char;

	source_char = (unsigned char *)source;
	while (n > 0)
	{
		if (*source_char == (unsigned char)c)
			return (source_char);
		source_char++;
		n--;
	}
	return (NULL);
}
