/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 17:37:32 by smagdela          #+#    #+#             */
/*   Updated: 2021/05/26 18:26:15 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_countwords(char *str, char sep)
{
	int	count;

	if (*str == '\0')
		return (0);
	count = 1;
	while (*str)
	{
		if (*str == sep)
			++count;
		++str;
	}
	return (count);
}

static int	ft_wordlen(const char *str, char sep)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (str[i] != sep && str[i] != '\0')
	{
		++len;
		++i;
	}
	return (len);
}

static char	*ft_error(char **tab, int nb)
{
	while (nb >= 0)
	{
		free(tab[nb]);
		--nb;
	}
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	*str;
	char	**tab;
	int		i;
	int		words;
	int		wd_len;

	str = ft_strtrim(s, c);
	if (!str || s == NULL)
		return (NULL);
	words = ft_countwords(str, c);
	tab = (char **)malloc((words + 1) * sizeof(char *));
	if (tab == NULL)
		return (NULL);
	tab[words] == NULL;
	i = 0;
	while (tab[i] != NULL)
	{
		wd_len = ft_wordlen(str, c);
		tab[i] = (char *)malloc((wd_len + 1) * sizeof(char));
		if (tab[i] == NULL || ft_strlcpy(tab[i], str, wd_len) != ft_strlen(str))
			return (ft_error(tab, i));
		++i;
	}
	return (tab);
}
