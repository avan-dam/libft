/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 12:08:21 by avan-dam       #+#    #+#                */
/*   Updated: 2019/11/25 16:39:32 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*newstr;
	unsigned int	m;
	size_t			len;

	if (s == 0 || f == 0)
		return (0);
	m = 0;
	len = ft_strlen(s);
	newstr = (char *)malloc(sizeof(char) * (len + 1));
	if (newstr == 0)
		return (0);
	while (s[m] != '\0')
	{
		newstr[m] = f(m, s[m]);
		m++;
	}
	newstr[m] = '\0';
	return (newstr);
}
