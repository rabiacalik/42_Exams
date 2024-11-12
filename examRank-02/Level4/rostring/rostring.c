#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int start;
    int end;
    int flag;

    i = 0;
    start = 0;
    end = 0;
    flag = 0;

    if(argc > 1)
    {
        while(argv[1][i] == ' ')
            i++;

        start = i;
        while((argv[1][i] != ' ') && argv[1][i])
            i++;

        end = i;

        while(argv[1][i] == ' ')
            i++;

        while(argv[1][i])
        {
            while(argv[1][i] == ' ')
            {
                i++;
                flag = 1;
            }

            if(flag)
                write(1, " ", 1);

            write(1, &argv[1][i], 1);
            i++;
            flag = 0;
            if(argv[1][i] == '\0')
                write(1, " ", 1);
        }
        while(start < end)
            write(1, &argv[1][start++], 1);         
    }
    write(1, "\n", 1);
}
