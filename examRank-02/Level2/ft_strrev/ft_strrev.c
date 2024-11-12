#include <stdio.h>

char *ft_strrev(char *str)
{
    int len = 0;
    int i = 0;
    char tmp;

    while(str[len] != '\0')
        len++;

    while (i < len)
    {
        tmp = str[i];
        str[i] = str[len];
        str[len] = tmp;
        i++;
        len--;
    }
    return(str);
}

int main()
{
    char *string = "rabia";
    char *sonuc;

    sonuc = ft_strrev(string);
    printf("%c", sonuc); 
}