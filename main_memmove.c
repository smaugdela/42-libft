/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 14:41:37 by smagdela          #+#    #+#             */
/*   Updated: 2021/05/20 14:50:18 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	main(void)
{
	char	*str;

	str = "Hello Night City!!!";
	printf("Ma fonction : %s", ft_memmove(str, str + 5, 19));
	printf("Fonction officielle : %s", memmove(str, str + 5, 19));
	return (0);
}
