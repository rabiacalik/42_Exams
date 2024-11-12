#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
    int number = 1;

    while (number <= n)
    {
        if (number == n)
            return (1);
        number = number * 2;
    }
    return (0);
}

/*int main()
{
    unsigned int sayi = 4;
    int sonuc;

    sonuc = is_power_of_2(sayi);
    printf("%d", sonuc);
}*/

//fonksiyona gönderilecek olan sayinin 2 nin ussu olup omadigina bakildi