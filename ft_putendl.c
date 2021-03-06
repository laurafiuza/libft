/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfiuza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 09:58:06 by lfiuza            #+#    #+#             */
/*   Updated: 2018/06/26 21:55:25 by lfiuza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s)
{
	char	*to_print;

	if (!s)
		return ;
	to_print = (char *)s;
	ft_putstr(to_print);
	ft_putchar('\n');
}
