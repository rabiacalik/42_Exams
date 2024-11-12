#include <stdio.h> //printf için kullanıldı

void	ft_swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int a = 5;
    int b = 4;

    ft_swap(&a, &b);
    printf("%d", a);
}