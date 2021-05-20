/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 12:23:51 by smagdela          #+#    #+#             */
/*   Updated: 2021/05/20 14:52:56 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int i)
{
	char	c;

	if (i == -2147483647)
		write (1, "-2147483648", 11);
	else
	{
		if (i < 0)
		{
			write (1, "-", 1);
			i *= -1;
		}
		if (i <= 9)
		{
			c = '0' + i;
			write (1, &c, 1);
		}
		else
		{
			ft_putnbr(i / 10);
			ft_putnbr(i % 10);
		}
	}
}
