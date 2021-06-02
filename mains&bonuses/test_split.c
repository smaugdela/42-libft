#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

static int	ft_countwords(char *str, char sep)
{
	int	count;
	int	i;

	i = 0;
	if (str[i] == '\0')
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

static char	*ft_offset_str(char *str, int add, char pass)
{
	str += add;
	while (*str == pass && pass != 0)
		++str;
	return (str);
}

size_t	ft_strlen (const char *str)
{
	size_t	i;

	i = 0;
	while (*(str + i))
		++i;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	if (src == NULL)
		return (0);
	len = ft_strlen(src);
	if (dstsize <= 0)
		return (len);
	i = 0;
	while (--dstsize && src[i])
	{
		dst[i] = src[i];
		++i;
	}
	dst[i] = '\0';
	return (len);
}


char	**ft_split(char const *s, char c)
{
	char	*str;
	char	**tab;
	int		i;
	int		words;
	int		wd_len;

	if (!s)
		return (NULL);
	str = ft_offset_str((char *)s, 0, c);
	words = ft_countwords(str, c);
	tab = (char **)malloc((words + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	i = -1;
	while (++i < words)
	{
		wd_len = ft_wordlen(str, c);
		tab[i] = (char *)malloc((wd_len) * sizeof(char));
		if (tab[i] == NULL || ft_strlcpy(tab[i], str, wd_len) != ft_strlen(str))
			return (ft_error(tab, i));
		str = ft_offset_str(str, wd_len, c);
	}
	tab[words] = NULL;
	return (tab);
}

void    ft_print_result(char const *s)
{
        int             len;

        len = 0;
        while (s[len])
                len++;
        write(1, s, len);
}
                
int main()
{
    char    **tabstr;
    int             i;
    
    if (!(tabstr = ft_split("", 'z')))
        ft_print_result("NULL");
    else
    {
        while (tabstr[i] != NULL)
        {
                ft_print_result(tabstr[i]);
                write(1, "|\n", 1);
                i++;
        }
    }
    return (0);
}
