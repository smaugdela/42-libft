/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 12:23:47 by smagdela          #+#    #+#             */
/*   Updated: 2021/05/20 14:52:30 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	int		*tmp_s;

	tmp_s = (int *)s;
	i = 0;
	while (i < n)
	{
		*(tmp_s + i) = c;
		++i;
	}
	return (s);
}
