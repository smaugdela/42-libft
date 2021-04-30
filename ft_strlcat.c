#include <string.h>

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t  i;
    size_t  len;

    len = ft_strlen(dest);
    if (size < len)
        len = size;
    i = 0;
    while((i + len) < (size - 1) && src[i])
    {
        dest[len + i] = src[i];
        ++i;
    }
    if (len < size)
        dest[len + i] = '\0';
    return (len + ft_strlen(src));
}