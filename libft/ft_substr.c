/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikegonz <mikegonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 20:44:21 by mikegonz          #+#    #+#             */
/*   Updated: 2023/12/16 23:07:02 by mikegonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*destine;
	unsigned int	size;
	size_t			i;

	i = 0;
	if (!len || !s)
		return (ft_strdup(""));
	size = ft_strlen(s);
	if (start > size)
		return (ft_strdup(""));
	if (len > (size - start))
		len = size - start;
	destine = (char *)malloc((len + 1) * sizeof(char));
	if (!destine)
		return (NULL);
	while (i < len)
	{
		destine[i] = s[start + i];
		i++;
	}
	destine[i] = '\0';
	return (destine);
}
