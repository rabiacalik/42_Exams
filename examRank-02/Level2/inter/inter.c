
int check_doubles(char *str1, char c, int pos)
{
    int i = 0;

    while (i < pos)
    {
        if (str1[i] == c)
            return(0);
        i++;
    }
    return (1);
}

ft_inter(char *str1, char *str2)
{
    int i;
    int j;

    i = 0;
    while (str1[i] != '\0')
    {
        j = 0;
        while (str2[j] != '\0')
        {
            if (str2[j] == str1[i])
            {
                if (check_doubles(str1, str1[i], i))
                {
                    write(1, &str1[i], 1);
                    break;
                }
            }
            j++;
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 3)
        ft_inter(argv[1], argv[2]);
    write(1, "\n", 1);
    return (0);
}

//iki tane string alıyor ve aynı olan karakterleri ekrana yazdırıyor
//eğer aynı olan karakterden birden fazla varsa onu yazmıyor
//bunun içinde check double ile ilk stringde bu characterin daha önceden yazılıp yazılmadığı kontrol edilir
