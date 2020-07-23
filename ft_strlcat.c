/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 18:12:36 by avan-dam       #+#    #+#                */
/*   Updated: 2019/11/19 16:54:14 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d;
	size_t	s;
	size_t	i;

	if (dstsize == 0)
		return (ft_strlen(src));
	d = ft_strlen(dst);
	s = ft_strlen(src);
	i = 0;
	if (d >= dstsize)
		return (s + dstsize);
	while (i < (dstsize - d - 1) && (src[i] != '\0'))
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[i + d] = '\0';
	return (d + s);
}
