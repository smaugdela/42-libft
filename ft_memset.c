#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    size_t  i;
    int *tmp_s;
    
    tmp_s = (int *)s;
    i = 0;
    while (i < n)
    {
        *(tmp_s + i) = c;
        ++i;
    }
    return (s);
}

