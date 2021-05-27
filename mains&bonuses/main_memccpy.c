/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 12:24:36 by smagdela          #+#    #+#             */
/*   Updated: 2021/05/21 12:13:06 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	src[18] = "Hello There!";
	char	dest[18] = "General Kenobi...";

	printf("Source : %s\nDestination : %s\n", src, dest);
	printf("Ma fonction : %s\n", (char *)ft_memccpy(dest, src, 'T', 10));
	printf("La fonction officielle : %s\n", (char *)memccpy(dest, src, 'T', 10));
	printf("Source : %s\nDestination : %s\n", src, dest);
	return (0);
}
