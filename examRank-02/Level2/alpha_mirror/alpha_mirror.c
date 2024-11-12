#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int fark = 0;

    if (argc == 2)
    {
        while ( argv[1][i] != '\0')
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                fark = argv[1][i] - 'a';
                argv[1][i] = 'z' - fark;
            }
            else if ( argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                fark = argv[1][i] - 'A';
                argv[1][i] = 'Z' - fark;
            }
            write(1, &argv[1][i], 1);
            fark = 0;
            i++;
        }
        write(1, "\n", 1);
    }
}