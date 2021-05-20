/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:09:57 by smagdela          #+#    #+#             */
/*   Updated: 2021/05/20 15:16:04 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = "Hello Night City!!!";
	printf("Ma fonction : %s \n", ft_memchr(str, 'i', ft_strlen(str)));
	printf("La fonction officielle : %s \n", memchr(str, 'i', ft_strlen(str)));
	return (0);
}