/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfiuza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 10:12:40 by lfiuza            #+#    #+#             */
/*   Updated: 2018/06/21 14:01:54 by lfiuza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long pos_num;

	if ((long)n < 0)
	{
		ft_putchar_fd('-', fd);
		pos_num = (long)n * -1;
	}
	while (pos_num >= 0)
	{
		ft_putchar_fd(((pos_num % 10) + '0'), fd);
		pos_num /= 10;
	}
}
