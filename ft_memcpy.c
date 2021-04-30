#include <string.h>
#include <stdio.h>

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

int main(void)
{
    char src[18] = "Hello There!";
    char dest[18] = "General Kenobi...";

    printf("Source : %s\nDestination : %s\n", src, dest);
    printf("Ma fonction : %s\n", (char *)ft_memcpy(dest, src, 10));
    printf("La fonction officielle : %s\n", (char *)memcpy(dest, src, 10));
    printf("Source : %s\nDestination : %s\n", src, dest);
    return (0);
}