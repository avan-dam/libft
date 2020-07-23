/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 11:44:56 by avan-dam       #+#    #+#                */
/*   Updated: 2019/11/20 16:55:12 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	b;
	size_t	s;
	size_t	i;
	size_t	j;

	b = ft_strlen(haystack);
	s = ft_strlen(needle);
	i = 0;
	j = 0;
	if (needle[i] == '\0')
		return ((char*)haystack);
	while ((j < b) && (j < len))
	{
		while (haystack[i + j] == needle[i] && (i + j) < len)
		{
			if (needle[i + 1] == '\0')
				return ((char*)&haystack[j]);
			i++;
		}
		i = 0;
		j++;
	}
	return (0);
}
