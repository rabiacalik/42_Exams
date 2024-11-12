#include <stdio.h>
#include <string.h>

int ft_atoi(const char *str)
{
	int i = 0;
	int carpan = 1;
	int sonuc = 0;
	while ( str[i] == 32 || str[i] == 9)
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		carpan = -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		sonuc = sonuc * 10;
		sonuc = sonuc + (str[i] - '0');
		i++;
	}
	return (sonuc * carpan);
}

int main ()
{
	char *sayi = "123";
	printf("%d", ft_atoi(sayi));
}