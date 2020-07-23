/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/06 13:08:33 by avan-dam       #+#    #+#                */
/*   Updated: 2019/11/25 11:51:16 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_length(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n = n * -1;
	}
	while (n >= 10)
	{
		len++;
		n = n / 10;
	}
	len++;
	return (len);
}

static void	ft_array_me(char *newstr, int n, int length)
{
	int	i;

	i = 0;
	newstr[length] = '\0';
	length = length - 1;
	if (n < 0)
	{
		newstr[i] = '-';
		i++;
		n = n * -1;
	}
	while (length >= i && n >= 0)
	{
		newstr[length] = '0' + (n % 10);
		n = n / 10;
		length--;
	}
}

char		*ft_itoa(int n)
{
	int		length;
	char	*newstr;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	length = ft_length(n);
	newstr = (char *)malloc(sizeof(char) * (length + 1));
	if (newstr == 0)
		return (0);
	ft_array_me(newstr, n, length);
	return (newstr);
}
