/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfiuza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 14:08:28 by lfiuza            #+#    #+#             */
/*   Updated: 2018/06/25 17:08:43 by lfiuza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *begin;
	t_list *curr;

	if (!lst)
		return (NULL);
	curr = (*f)(lst);
	begin = curr;
	while (lst->next)
	{
		lst = lst->next;
		if (!(curr->next = (*f)(lst)))
		{
			free(lst->next);
			return (NULL);
		}
		curr = curr->next;
	}
	return (begin);
}
