/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfiuza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 21:01:33 by lfiuza            #+#    #+#             */
/*   Updated: 2018/06/26 13:02:25 by lfiuza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	n;
	unsigned int	i;
	char			*fresh;

	n = 0;
	while (s[n])
		n++;
	if (!n)
		return (NULL);
	fresh = (char *)malloc(sizeof(char) * (n + 1));
	if (!fresh)
		return (NULL);
	fresh[n] = '\0';
	i = 0;
	while (i < n)
	{
		fresh[i] = (*f)(s[i]);
		i++;
	}
	return (fresh);
}
