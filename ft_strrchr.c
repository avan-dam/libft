/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 12:53:36 by avan-dam       #+#    #+#                */
/*   Updated: 2019/11/20 16:55:18 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		end;

	end = ft_strlen(s);
	while (end >= 0)
	{
		if (s[end] == c)
			return ((char*)&s[end]);
		end--;
	}
	return (0);
}
