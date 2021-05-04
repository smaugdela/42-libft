#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
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
        ++i;
    }
    return (dest);
}