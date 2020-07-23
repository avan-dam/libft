/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 14:24:44 by avan-dam       #+#    #+#                */
/*   Updated: 2019/11/26 11:05:49 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	free_me(char **strnew, int m)
{
	int i;

	i = 0;
	while (i < m)
	{
		free(strnew[i]);
		i++;
	}
	free(strnew);
	return (0);
}

static int	count_words(char const *s, char c)
{
	int	i;
	int	m;

	i = 0;
	m = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		while (s[i] && s[i] != c)
			i++;
		m++;
		while (s[i] && s[i] == c)
			i++;
	}
	return (m);
}

static char	*new_arrays(char const *s, int start, int end)
{
	char	*array;
	int		len;
	int		i;

	i = 0;
	len = end - start;
	array = 0;
	array = (char *)malloc(sizeof(char) * (len + 2));
	if (array == NULL)
		return (NULL);
	while (i <= len && s[start] != '\0')
	{
		array[i] = s[start];
		i++;
		start++;
	}
	array[i] = '\0';
	return (array);
}

static int	find_first_last(char const *s, char c, char **strnew)
{
	int	i;
	int	m;
	int	start;
	int	end;

	i = 0;
	m = 0;
	while (s[i] != '\0')
	{
		if (i == 0 && s[i] != c)
			start = i;
		else if (s[i] == c && s[i + 1] != '\0' && s[i + 1] != c)
			start = i + 1;
		if (s[i] != c && (s[i + 1] == '\0' || s[i + 1] == c))
		{
			end = i;
			strnew[m] = new_arrays(s, start, end);
			if (strnew[m] == NULL)
				return (free_me(strnew, m));
			m++;
		}
		i++;
	}
	return (1);
}

char		**ft_split(char const *s, char c)
{
	char	**strnew;
	int		words;
	int		i;

	if (s == 0)
		return (0);
	i = 0;
	words = count_words(s, c);
	strnew = (char**)malloc(sizeof(char*) * (words + 1));
	if (strnew == NULL)
		return (NULL);
	if (words == 0)
	{
		strnew[0] = 0;
		return (strnew);
	}
	if (find_first_last(s, c, strnew) == 0)
		return (0);
	strnew[words] = NULL;
	return (strnew);
}
