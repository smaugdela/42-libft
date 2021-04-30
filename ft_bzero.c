#include <string.h>
#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
    size_t i;
    char *tmp_s;

    tmp_s = s;
    i = 0;
    while(i < n)
        tmp_s[i++] = '\0';
}

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