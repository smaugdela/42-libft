#include <string.h>

void *ft_memchr(const void *src, int c, size_t n)
{
    size_t i;
    unsigned char *tmp_src;

    tmp_src = (unsigned char *)src;
    i = 0;
    while(i < n)
    {
        if (tmp_src[i] == c)
            return (src + i);
        ++i;
    }
    return (NULL);
}