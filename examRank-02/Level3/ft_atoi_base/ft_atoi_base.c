#include <unistd.h>
#include <stdio.h>

//geçerli bir deger olup olmadığı kontrol ediliyor
int control(char c, int mahmut)
{
    int i = 0;
    char *nums1 = "0123456789abcdef";
    char *nums2 = "0123456789ABCDEF";

    while(i < mahmut)
    {
        if(nums1[i] == c || nums2[i] == c)
            return (1);
        i++; 
    } 
    return (0);
}

int ft_atoi_base(const char *str, int mahmut)
{
    int i = 0;
    int carpan = 1;
    int sonuc = 0;

    if(str[i] == '-')
    {
        carpan *= -1;
        i++;
    }

    while(str[i] && control(str[i], mahmut))
    {
        if(mahmut <= 10)
            sonuc = (sonuc * mahmut) + (str[i] - '0');

        else
        {
            if(str[i] >= '0' && str[i] <= '9')
            {
                sonuc = (sonuc * mahmut) + (str[i] - '0');
            }
            else if(str[i] >= 'a' && str[i] <= 'f')
            {
                sonuc = (sonuc * mahmut) + (str[i] - 'a' + 10);
            }
            else if(str[i] >= 'A' && str[i] <= 'F')
            {
                sonuc = (sonuc * mahmut) + (str[i] - 'A' + 10);
            }
        }
        i++;
    }
    return (sonuc * carpan);
}

int main()
{
    int sayi;
    sayi = ft_atoi_base("2324", 2);
    printf("%d", sayi);
}