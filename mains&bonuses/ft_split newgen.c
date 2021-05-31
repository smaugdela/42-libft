/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 14:17:15 by smagdela          #+#    #+#             */
/*   Updated: 2021/05/31 15:29:00 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char *str, char sep)
{
	int	count;
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (0);
	count = 1;
	while (str[i])
	{
		if (str[i] == sep && str[i + 1] != sep)
			++count;
		++i;
	}
	return (count);
}

static char	*ft_separator(char *str, char sep)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == sep)
		{
			str[i] = '\0';
		}
		++i;
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	*str;
	char	**tab;
	int		word;
	int		len;

	str = ft_strdup(ft_strtrim(s, &c));
	if (!str || s == NULL)
		return (NULL);
	tab = (char **)malloc((ft_countwords(str, c) + 1) * sizeof(char *));
	if (tab == NULL)
	{
		free(str);
		return (NULL);
	}
	tab[ft_countwords(str, c)] = NULL;
	len = ft_strlen(str);
	str = ft_separator(str, c);
	word = 0;
	tab[0] = str;
	while(--len)
	{
		if (!str)
		{
			tab[word++] = ++str;
			--len;
		}
		++str;
	}
	return (tab);
}
