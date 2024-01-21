/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikegonz <mikegonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 00:45:26 by mikegonz          #+#    #+#             */
/*   Updated: 2023/12/16 20:36:04 by mikegonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *source, const char *find, size_t len)
{
	size_t	i;
	size_t	n;

	if (*find == '\0')
		return ((char *)source);
	i = 0;
	while (i < len && source[i] != '\0')
	{
		n = 0;
		while (source[i + n] == find[n] && (i + n) < len)
		{
			n++;
			if (!find[n])
				return ((char *)&source[i]);
		}
		i++;
	}
	return (NULL);
}
