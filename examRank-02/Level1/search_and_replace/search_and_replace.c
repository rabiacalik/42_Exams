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
    int len_bir;
    int len_iki;

    len_bir = ft_len(argv[2]);
    len_iki = ft_len(argv[3]);

    if (argc == 4 && len_bir == 1 && len_iki == 1)
    {
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] == argv[2][0])
            {
                argv[1][i] = argv[3][0];
            }
            else if (argv[1][i] == argv[3][0])
            {
                argv[1][i] = argv[2][0];
            }
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}