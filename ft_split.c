/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 17:37:32 by smagdela          #+#    #+#             */
/*   Updated: 2022/08/11 17:23:10 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *str, char sep, size_t start)
{
	int	count;
	int	i;

	i = start;
	if (!str || str[i] == '\0')
		return (0);
	count = 0;
	while (str[i])
	{
		if (str[i] != sep && (str[i + 1] == '\0' || str[i + 1] == sep))
			++count;
		++i;
	}
	return (count);
}

static size_t	ft_wordlen(char const *str, char sep, size_t ptr)
{
	size_t	len;
	int		i;

	len = 0;
	i = ptr;
	while (str && str[i] != sep && str[i] != '\0')
	{
		++len;
		++i;
	}
	return (++len);
}

static char	**ft_error(char **tab, int nb)
{
	while (nb >= 0)
	{
		free(tab[nb]);
		--nb;
	}
	free(tab);
	return (NULL);
}

static size_t	offset(char const *s, size_t wd_len, size_t ptr, char c)
{
	size_t	offset;

	if (ft_strlen(s) <= wd_len + ptr)
		return (ft_strlen(s) - ptr);
	offset = wd_len;
	while (s[ptr + offset] && s[ptr + offset] == c)
		++offset;
	return (offset);
}

char	**ft_split(char const *s, char c)
{
	size_t	ptr;
	char	**tab;
	int		wd_count;
	size_t	wd_len;
	int		i;

	if (!s)
		return (NULL);
	ptr = offset(s, 0, 0, c);
	wd_count = ft_countwords(s, c, ptr);
	tab = (char **)malloc(sizeof(char *) * (wd_count + 1));
	if (tab == NULL)
		return (NULL);
	tab[wd_count] = NULL;
	i = 0;
	while (ptr < ft_strlen(s) && i < wd_count)
	{
		wd_len = ft_wordlen(s, c, ptr);
		tab[i] = ft_substr(s, ptr, wd_len - 1);
		if (tab[i] == NULL)
			return (ft_error(tab, i));
		ptr += offset(s, wd_len, ptr, c);
		++i;
	}
	return (tab);
}
