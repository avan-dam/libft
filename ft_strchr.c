/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 13:21:46 by avan-dam       #+#    #+#                */
/*   Updated: 2019/11/20 17:00:00 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		length;
	int		i;

	i = 0;
	length = ft_strlen(s);
	if ((char)c == '\0')
		return ((char*)&s[length]);
	while (i < length)
	{
		if (s[i] == (char)c)
		{
			return ((char*)&s[i]);
		}
		i++;
	}
	return (0);
}
