
char *ft_strdup(char *str)
{
    int i = 0;
    char *dup;

    while (str[i] != '\0')
        i++;
    
    dup = malloc(i + 1);
    i = 0;
    while (str[i] != '\0')
    {
        dup[i] = str[i];
        i++;
    }
    dup[i] = '\0';
    return (str);
    free(dup);
}