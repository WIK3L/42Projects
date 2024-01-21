/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikegonz <mikegonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:32:29 by mikegonz          #+#    #+#             */
/*   Updated: 2023/12/28 21:14:33 by mikegonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	asigne_memory_size(char *source, int c)
{
	size_t	i;

	i = 0;
	while (*source)
	{
		if (*source != c && (source[+1] == c || *(source +1) == '\0'))
			i++;
		source++;
	}
	return (i +1);
}

static size_t	string_end(char *source, int c)
{
	size_t	index;

	index = 0;
	while (*source && *source != c)
	{
		source++;
		index++;
	}
	return (index);
}

static char	**fill_destine(char *source, char c, char **destine, size_t i)
{
	size_t	count;
	size_t	index;

	count = 0;
	while (count < i -1)
	{
		if (*source != c)
		{
			index = string_end(source, c);
			destine[count++] = ft_substr(source, 0, index);
			if (!destine[count - 1])
			{
				while (count > 0)
					free(destine[--count]);
				free(destine);
				return (NULL);
			}
			source += index;
		}
		source++;
	}
	return (destine);
}

char	**ft_split(char const *s, char c)
{
	char	*source;
	char	**destine;
	size_t	i;

	if (!s)
		return (NULL);
	source = (char *)s;
	i = asigne_memory_size(source, c);
	destine = (char **)ft_calloc(i, sizeof(char *));
	if (!destine)
		return (NULL);
	destine = fill_destine(source, c, destine, i);
	return (destine);
}
