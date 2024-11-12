#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv)
{
    int a;
    int b;
    int result;
    char operator;

    if (argc == 4)
    {
        a = atoi(argv[1]);
        operator = argv[2][0];
        b = atoi(argv[3]);

        if (argv[2][0] == '+')
            result = a + b;
        else if (argv[2][0] == '-')
            result = a - b;
        else if (argv[2][0] == '*')
            result = a * b;
        else if (argv[2][0] == '/')
            result = a / b;
    }
    write(1, "\n", 1);
}