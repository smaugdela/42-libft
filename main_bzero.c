/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 12:24:32 by smagdela          #+#    #+#             */
/*   Updated: 2021/05/20 12:25:09 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
    int i;
    char str[19] = "Hello Night City!!!";

    i = 0;
    while(i < 20)
    {
        printf("%c \n", str[i++]);
    }
    i = 0;
    ft_bzero(str, 8);
    while(i < 20)
    {
        printf("%c \n", str[i++]);
    }
    return (0);
}