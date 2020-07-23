/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 16:36:42 by avan-dam       #+#    #+#                */
/*   Updated: 2019/11/12 12:59:33 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dst1;
	unsigned char	*src1;

	dst1 = ((unsigned char *)dst);
	src1 = ((unsigned char *)src);
	if (dst1 > src1)
	{
		i = len;
		while (i > 0)
		{
			i--;
			dst1[i] = src1[i];
		}
	}
	if (dst1 < src1)
	{
		i = 0;
		while (i < len)
		{
			dst1[i] = src1[i];
			i++;
		}
	}
	return (dst);
}
