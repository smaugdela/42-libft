/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split oldgen.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 17:37:32 by smagdela          #+#    #+#             */
/*   Updated: 2021/05/31 15:08:07 by smagdela         ###   ########.fr       */
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
	return (++len);
}

static char	**ft_error(char *str, char **tab, int nb)
{
	while (nb >= 0)
	{
		free(tab[nb]);
		--nb;
	}
	free(tab);
	free(str);
	return (NULL);
}

static char	*ft_offset_str(char *str, int add, char pass)
{
	str += add;
	while (*str == pass)
		++str;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	*str;
	char	**tab;
	int		i;
	int		words;
	int		wd_len;

	str = ft_strtrim(s, &c);
	if (!str || s == NULL)
		return (ft_error(str, NULL, 0));
	words = ft_countwords(str, c);
	tab = (char **)malloc((words + 1) * sizeof(char *));
	if (tab == NULL)
		return (ft_error(str, tab, 0));
	tab[words] = NULL;
	i = -1;
	while (++i < words)
	{
		wd_len = ft_wordlen(str, c);
		tab[i] = (char *)malloc((wd_len) * sizeof(char));
		if (tab[i] == NULL || ft_strlcpy(tab[i], str, wd_len) != ft_strlen(str))
			return (ft_error(str, tab, i));
		str = ft_offset_str(str, wd_len, c);
	}
	return (tab);
}
