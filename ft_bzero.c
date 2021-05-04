#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    size_t i;
    char *tmp_s;

    tmp_s = s;
    i = 0;
    while(i < n)
        tmp_s[i++] = '\0';
}