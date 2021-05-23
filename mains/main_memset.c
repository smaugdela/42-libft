/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 12:24:43 by smagdela          #+#    #+#             */
/*   Updated: 2021/05/21 14:48:56 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	str[100];

	printf("Ma fonction :%s\n", ft_memset(str, 'A', 5));
	printf("La fonction :%s\n", memset(str, 'B', 5));

	return (0);
}
