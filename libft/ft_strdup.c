/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikegonz <mikegonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 00:44:26 by mikegonz          #+#    #+#             */
/*   Updated: 2023/12/16 20:31:21 by mikegonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;
	char	*source;
	size_t	size;

	source = (char *)s;
	size = ft_strlen(s) + 1;
	copy = ft_calloc(size, sizeof(char));
	if (copy == NULL)
		return (NULL);
	ft_strlcpy(copy, source, size);
	return (copy);
}
