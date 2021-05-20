/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 12:24:03 by smagdela          #+#    #+#             */
/*   Updated: 2021/05/20 12:25:44 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strcpy(char *dest, const char *src)
{
    size_t  i;

    i = 0;
    while(*(src + i))
    {
        *(dest + i) = *(src + i);
        ++i;
    }
    *(dest + i) = '\0';
    return (dest);
}