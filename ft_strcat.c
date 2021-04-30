#include <string.h>

char *ft_strcat(char *dest, const char *src)
{
    size_t  i;
    size_t  len;

    len = ft_strlen(dest);
    i = 0;
    while(src[i])
    {
        dest[len + i] = src[i];
        ++i;
    }
    dest[len + i] = '\0';
    return (dest);
}