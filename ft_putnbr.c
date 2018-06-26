/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfiuza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 09:59:34 by lfiuza            #+#    #+#             */
/*   Updated: 2018/06/25 17:59:30 by lfiuza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long pos_num;

	pos_num = (long)n;
	if (pos_num < 0)
	{
		ft_putchar('-');
		pos_num *= -1;
	}
	while (pos_num >= 0)
	{
		ft_putchar((pos_num % 10) + '0');
		pos_num /= 10;
	}
}
