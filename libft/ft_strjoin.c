/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikegonz <mikegonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 23:10:06 by mikegonz          #+#    #+#             */
/*   Updated: 2023/12/17 00:17:24 by mikegonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*destine;
	size_t	len_s1;
	size_t	len_s2;
	char	*char_s1;
	char	*char_s2;

	char_s1 = (char *)s1;
	char_s2 = (char *)s2;
	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	destine = ft_calloc((len_s1 + len_s2 + 1), sizeof(char));
	if (!destine)
		return (NULL);
	ft_memcpy(destine, char_s1, (len_s1));
	ft_memcpy(destine + len_s1, char_s2, len_s2);
	return (destine);
}
