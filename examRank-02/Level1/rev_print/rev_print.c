#include <unistd.h>

int ft_len(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int main(int argc, char **argv)
{
    int i = 0;

    if (argc == 2)
    {
        int len = ft_len(argv[1]);

        while (len >= 0)
        {
            write(1, &argv[1][len], 1);
            len--;
        }
    }
    write(1, "\n", 1);
}