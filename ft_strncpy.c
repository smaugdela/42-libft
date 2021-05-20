/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 12:24:22 by smagdela          #+#    #+#             */
/*   Updated: 2021/05/20 12:25:11 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strncpy(char *restrict dest, const char *restrict src, size_t n)
{
    size_t  i;

    i = 0;
    while(i < n && *(src + i))
    {
        dest[i] = src[i];
        ++i;
    }
    while(i < n)
    {
        dest[i] = '\0';
        ++i;
    }
    return (dest);
}