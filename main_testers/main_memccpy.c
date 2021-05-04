#include "libft.h"
#include <stdio.h>

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