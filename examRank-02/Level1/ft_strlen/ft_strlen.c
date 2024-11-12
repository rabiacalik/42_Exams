#include <stdio.h> // printf için kullanıldı

int	ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

int main()
{
    char str[] = "kamoncik";
    printf("%d", ft_strlen(str));

}