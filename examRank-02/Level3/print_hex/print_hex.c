#include <unistd.h>

int ft_atoi(char *str)
{
    int s = 0;

    while(*str != '\0')
    {
        s = s * 10;
        s = s + (*str - '0');
        str++;
    }
    return (s);
}

void print_hex(int number)
{
    char *hex_digit = "0123456789abcdef";

    if (number >= 16)
        print_hex(number / 16);
    write(1, &hex_digit[number % 16], 1);
}

int main(int argc, char **argv)
{
    int number;

    if(argc == 2)
    {
        number = ft_atoi(argv[1]);
        print_hex(number);
    }
    write(1, "\n", 1);
    return (0);
}