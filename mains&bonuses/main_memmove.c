/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 14:41:37 by smagdela          #+#    #+#             */
/*   Updated: 2021/05/21 17:55:42 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	str[20] = "Hello Night City!!!";

	printf("Ma fonction :%s \n", ft_memmove(str, str, 15));
	printf("Fonction officielle :%s \n", memmove(str, str, 15));
	return (0);
}
