#include <stdlib.h>

int is_writetable(char c)
{
    return (c >= 33 && c <= 126);
}

int word_count(char *str)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while(str[i])
    {
        if(str[i] >= 33 && str[i] <= 126)
        {
            if(str[i + 1] == ' ' || !str[i + 1])
                count++;
        }
        i++;
    }
    return count;
}

char **ft_split(char *str)
{
    int i;
    int j;
    int k;
    int flag;
    char **kamoncik;

    i = 0;
    j = 0;
    k = 0;
    flag = 0;
    kamoncik = (char **)malloc(sizeof(char *) * (word_count(str) + 1));

    while(str[i])
    {
        if(is_writetable(str[i]))
        {
            if(k == 0)
            {
                kamoncik[j] = (char *)malloc(sizeof(char) * (word_size(str + i) + 1));
                flag = 1;
            }
            kamoncik[j][k] = str[i];

            if(!str[i + 1])
            {
                kamoncik[j][k] = '\0';
                j++;
            }
            k++;
        }

        else
        {
            if(flag == 1)
            {
                kamoncik[j][k] = '\0';
                j++;
            }
            flag = 0;
            k = 0;
        }
        i++;
    }
    kamoncik[j] = '\0';
    return kamoncik;
}

//kodu çalıstır ve tekrar kendin yazmaya çalış