#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
}

/*
int main()
{
    char *kelime1 = "aaaaaba";
    char *kelime2 = "aaaaaca";
    
    printf("%d", ft_strcmp(kelime1, kelime2));
}
*/