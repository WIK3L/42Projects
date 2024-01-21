/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikegonz <mikegonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 21:37:55 by mikegonz          #+#    #+#             */
/*   Updated: 2023/12/25 15:36:09 by mikegonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*destine;
	unsigned int	len;
	unsigned int	index;

	if (!s || !f)
		return (NULL);
	index = 0;
	len = 0;
	while (s[len] != '\0')
		len++;
	destine = (char *)malloc(len +1 * sizeof(char));
	if (!destine)
		return (NULL);
	while (index < len)
	{
		destine[index] = (*f)(index, s[index]);
		index++;
	}
	if (index == len)
		destine[index] = '\0';
	return (destine);
}
/*
int	main(void)
{
	char *test = malloc(10 * sizeof(char));
    
    if (!test)
        return(1);
    unsigned int i = 0;    
    while(i < 4)
        test[i++] = 'h';
    test[i] = '\0';

    ft_strmapi(test, prueba);    
	//prueba(2, test);
	//test[4] = 'x';
	//ft_strmapi(test, )
	printf("%s", test);
    free(test); 
	return (0);
}
*/