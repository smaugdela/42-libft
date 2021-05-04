#include "libft.h"

char *ft_strncat(char *restrict dest, const char *restrict src, size_t n)
{
    size_t  i;
    size_t  len;

    len = ft_strlen(dest);
    i = 0;
    while(i < n && src[i])
    {
        dest[len + i] = src[i];
        ++i;
    }
    dest[len + i] = '\0';
    return (dest);
}