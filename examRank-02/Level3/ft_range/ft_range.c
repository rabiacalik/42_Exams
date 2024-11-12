#include <stdlib.h>
#include <stdio.h>

int *ft_range(int start, int end)
{
    int i = 0;
    int size;
    int *res;

    size = (start <= end) ? (end - start + 1) : (start - end + 1);
    res = (int*)malloc(sizeof(int) * size);

    if(!res)
        return NULL;

    while(i < size)
    {
        res[i] = start;
        start += (start <= end) ? 1 : -1;
        i++;
    }
    return res;
}

//sadece ft_range fonksiyonu isteniyor, main kontrol icin var.
 int main()
 {
 	int i = 0;
 	int *arr = ft_range(-1, 3);
 	while(i < 5)
 	{
 		printf("%d",arr[i]);
 		i++;
 	}
 }