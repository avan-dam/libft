/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 13:56:08 by avan-dam       #+#    #+#                */
/*   Updated: 2019/11/25 15:47:35 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_in_here(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	ft_find_start(char const *s1, char const *set)
{
	int	j;

	j = 0;
	while (s1[j] != '\0')
	{
		if (ft_in_here(s1[j], set))
			j++;
		else
			return (j);
	}
	return (0);
}

static int	ft_find_end(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1) - 1;
	while (i >= 0)
	{
		if (ft_in_here(s1[i], set))
			i--;
		else
			return (i + 1);
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*strnew;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	start = ft_find_start(s1, set);
	end = ft_find_end(s1, set);
	if (start > end)
		return (ft_strdup(""));
	strnew = (char *)malloc(sizeof(char) * (end - start + 1));
	if (strnew == NULL)
		return (NULL);
	i = 0;
	while (s1[start + i] != '\0' && i < (end - start))
	{
		strnew[i] = s1[start + i];
		i++;
	}
	strnew[i] = '\0';
	return (strnew);
}
