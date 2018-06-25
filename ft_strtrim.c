/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfiuza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 21:51:18 by lfiuza            #+#    #+#             */
/*   Updated: 2018/06/21 14:06:07 by lfiuza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_ws(char c)
{
	if (c == '\n' || c == '\t' || c == ' ')
		return (1);
	return (0);
}

char		*ft_strtrim(char const *s)
{
	unsigned int	i;
	unsigned int	start;
	unsigned int	end;

	start = 0;
	while (is_ws(s[start]))
		start++;
	i = (start + 1);
	end = i;
	while (s[i])
	{
		if (is_ws(s[i]) && !is_ws(s[i - 1]))
			end = i;
		i++;
	}
	return (ft_strsub(s, start, end - start));
}
