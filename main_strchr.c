/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 12:24:50 by smagdela          #+#    #+#             */
/*   Updated: 2021/05/20 12:25:04 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(int argc, char **argv)
{
    char *str = "Hello Night City!!!";
    char c;

    if(argc == 2)
    {
        c = argv[1][0];
        printf("Chaine sondee : %s\n", str);
        printf("Caractere recherche : %c\n", c);
        printf("Retour de ma fonction : %s\n", ft_strchr(str, c));
        printf("Retour fonction officielle : %s\n", strchr(str, c));
        return (0);
    }
    return (42);
}