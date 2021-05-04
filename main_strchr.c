#include "libft.h"
#include <stdio.h>

int main(int argc, char **argv)
{
    char *str = "Hello Night City!!!";
    char c;

    if(argc == 2)
    {
        c = argv[1][0];
        printf("Chaine sondee : %s\n", str);
        printf("Caractere recherche : %c\n", c);
        printf("Retour de ma fonction : %s\n", ft_strchr(str, c));
        printf("Retour fonction officielle : %s\n", strchr(str, c));
        return (0);
    }
    return (42);
}