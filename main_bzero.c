#include "libft.h"
#include <stdio.h>

int main(void)
{
    int i;
    char str[19] = "Hello Night City!!!";

    i = 0;
    while(i < 20)
    {
        printf("%c \n", str[i++]);
    }
    i = 0;
    ft_bzero(str, 8);
    while(i < 20)
    {
        printf("%c \n", str[i++]);
    }
    return (0);
}