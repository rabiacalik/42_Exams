#include <unistd.h>

int ft_atoi(char *str)
{
    int res = 0;
    int n = 1;

    if(*str == '-')
    {
        n *= -1;
        str++;
    }
    while (*str)
    {
        res = (res * 10) + (*str - 48);
        str++;
    }
    return res * n;
}

void ft_putnbr(int n)
{
    char str[] = "0123456789";

    if (n < 0)
    {
        write(1, "-", 1);
        n *= -1;
    }
    if (n > 9)
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
    else if (n <= 9)
        write(1, &str[n % 10], 1);
}


int main(int argc, char **argv)
{
    int i = 1;
    int res = 0;
    int num = ft_atoi(argv[1]);

    if (argc == 2)
    {
        while (i <= 9)
        {
            ft_putnbr(i);
            write(1, " * ", 3);

            ft_putnbr(num);
            write(1, " = ", 3);
            res = num * i;

            ft_putnbr(res);
            res = 0;
            i++;
            write(1, "\n", 1);
        }
    }
    write(1, "\n", 1);
}