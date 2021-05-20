/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 12:23:44 by smagdela          #+#    #+#             */
/*   Updated: 2021/05/20 14:41:17 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp_dest;
	char	*tmp_src;
	size_t	i;

	tmp_src = (const char *)src;
	tmp_dest = (char *)dest;
	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			tmp_dest[i] = tmp_src[i];
			++i;
		}
	}
	else if (dest > src)
	{
		i = n - 1;
		while (i)
		{
			tmp_dest[i] = tmp_src[i];
			--i;
		}
	}
	return (dest);
}
