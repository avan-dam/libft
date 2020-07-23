/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 16:15:55 by avan-dam       #+#    #+#                */
/*   Updated: 2019/11/14 11:26:00 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*dst1;
	const unsigned char	*src1;
	void				*yay;

	dst1 = ((unsigned char *)dst);
	src1 = ((unsigned char *)src);
	i = 0;
	yay = 0;
	while (i < n)
	{
		dst1[i] = src1[i];
		if (src1[i] == (unsigned char)c)
		{
			yay = &dst[i + 1];
			return (yay);
		}
		i++;
	}
	return (0);
}
