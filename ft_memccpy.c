#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    size_t i;
    char *tmp_dest;
    char *tmp_src;

    tmp_dest = (char *)dest;
    tmp_src = (char *)src;
    i = 0;
    while(i < n && tmp_src[i])
    {
        tmp_dest[i] = tmp_src[i];
        if (tmp_src[i] == c)
            return (tmp_dest + i + 1);
        ++i;
    }
    return (NULL);
}