/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfiuza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 09:30:47 by lfiuza            #+#    #+#             */
/*   Updated: 2018/06/21 13:59:09 by lfiuza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	how_many_digits(long pos_num)
{
	int n;

	n = 0;
	while (pos_num >= 0)
	{
		n++;
		pos_num /= 10;
	}
	return (n);
}

static char	*actual_itoa(char *itoa, int negative, long pos_num)
{
	int i;

	i = 0;
	if (negative)
	{
		itoa[i] = '-';
		i++;
	}
	while (pos_num >= 0)
	{
		itoa[i] = (pos_num % 10);
		i++;
		pos_num /= 10;
	}
	return (itoa);
}

char		*ft_itoa(int n)
{
	int		digits;
	int		negative;
	long	long_num;
	char	*itoa;

	digits = 0;
	negative = 0;
	if ((long)n < 0)
	{
		digits++;
		long_num = (long)n * -1;
		negative++;
	}
	digits += how_many_digits(long_num);
	itoa = (char *)malloc(sizeof(char) * (digits + 1));
	itoa[digits] = '\0';
	return (actual_itoa(itoa, negative, long_num));
}
