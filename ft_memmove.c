#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    char tmp_arr[n];
    char *tmp_dest;
    char *tmp_src;
    size_t i;

    tmp_src = (char *)src;
    tmp_dest = (char *)dest;
    i = 0;
    while(i < n)
    {
        tmp_arr[i] = *(tmp_src + i);
        ++i;
    }
    i = 0;
    while(i < n)
    {
        tmp_dest[i] = tmp_arr[i];
        ++i;
    }
    return (dest);
}