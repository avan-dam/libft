/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/11 14:51:32 by avan-dam       #+#    #+#                */
/*   Updated: 2019/11/14 11:27:20 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*store;
	t_list	*me;

	if (del == NULL || lst == NULL)
	{
		return ;
	}
	store = *lst;
	*lst = NULL;
	while (store != NULL)
	{
		del(store->content);
		me = (store->next);
		free(store);
		store = me;
	}
}
