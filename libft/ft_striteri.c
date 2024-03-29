/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikegonz <mikegonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 15:39:16 by mikegonz          #+#    #+#             */
/*   Updated: 2024/01/21 19:33:53 by mikegonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	len;
	unsigned int	index;

	index = 0;
	len = 0;
	if (!s || !f)
		return ;
	while (s[len] != '\0')
		len++;
	while (index < len)
	{
		(*f)(index, &s[index]);
		index++;
	}
	if (index == len)
		s[index] = '\0';
}
