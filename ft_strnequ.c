/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfiuza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 21:24:39 by lfiuza            #+#    #+#             */
/*   Updated: 2018/06/21 14:04:57 by lfiuza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((s1[n] && s2[n]) && (s1[n] != s2[n]))
			return (0);
		else if (s1[n] || s2[n])
			return (0);
		else if (!s1[n] && !s2[n])
			return (1);
		i++;
	}
}
