#include <string.h>
#include <stdlib.h>

char *ft_strdup(const char *str)
{
    char *dest;
    size_t  i;

    dest = malloc(ft_strlen(str) + 1);
    if (!dest)
        return(NULL);
    i = 0;
    while(*(str + i))
    {
        *(dest + i) = *(str + i);
        ++i;
    }
    return(dest);
}