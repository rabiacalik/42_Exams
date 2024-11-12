#include <stdio.h>

int max(int *tab, unsigned int len)
{
    int result;
    int i = 0;
    result = tab[i];

    while(i < len)
    {
        if (result < tab[i])
        {
            result = tab[i];
        }
        i++;
    }
    return result;
}

int main()
{
    int array[] = {12, 4, 56, 23, 8};
    int maximum = max(array, 5);
    printf("En buyuk sayi : %d", maximum);
    return (0);
}