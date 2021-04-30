#include <string.h>
#include <stdio.h>

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

int main(void)
{
    char src[18] = "Hello There!";
    char dest[18] = "General Kenobi...";

    printf("Source : %s\nDestination : %s\n", src, dest);
    printf("Ma fonction : %s\n", (char *)ft_memccpy(dest, src, 'T', 10));
    printf("La fonction officielle : %s\n", (char *)memccpy(dest, src, 'T', 10));
    printf("Source : %s\nDestination : %s\n", src, dest);
    return (0);
}