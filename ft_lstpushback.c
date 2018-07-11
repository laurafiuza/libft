/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfiuza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 19:30:31 by lfiuza            #+#    #+#             */
/*   Updated: 2018/06/26 20:11:00 by lfiuza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstpushback(t_list **begin_list, void *content, size_t content_size)
{
	t_list	*list;

	list = *begin_list;
	if (!list)
		list = ft_lstnew(content, content_size);
	else
	{
		while (list->next)
			list = list->next;
		list->next = ft_lstnew(content, content_size);
	}
}
