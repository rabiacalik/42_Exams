#include "flood_fill.h"
#include <unistd.h>

void fill(char **tab, t_point uzunluk, t_point mahmut, char sukufe)
{
    if(mahmut.y < 0 || mahmut.y >= uzunluk.y || mahmut.x < 0 || mahmut.x >= uzunluk.x
        || tab[mahmut.y][mahmut.x] != sukufe)
        return;

    tab[mahmut.y][mahmut.x] = 'F';

    fill(tab, uzunluk, (t_point){mahmut.x - 1, mahmut.y}, sukufe);
    fill(tab, uzunluk, (t_point){mahmut.x + 1, mahmut.y}, sukufe);
    fill(tab, uzunluk, (t_point){mahmut.x, mahmut.y - 1}, sukufe);
    fill(tab, uzunluk, (t_point){mahmut.x, mahmut.y + 1}, sukufe);
}

void flood_fill(char **tab, t_point size,t_point begin)
{
    fill(tab, size, begin, tab[begin.y][begin.x]);
}

/*
int main()
{
    // Örnek bir karakter tablosu
    char *tab[] = {
        "XXXXX",
        "XOOOX",
        "XOOOX",
        "XXXXX"
    };

    t_point size = {5, 4};      // Tablonun boyutu
    t_point begin = {2, 1};     // Flood fill'in başlayacağı nokta

    flood_fill(tab, size, begin);

    // Sonuç tabloyu yazdırma
    for (int i = 0; i < size.y; i++)
    {
        write(1, tab[i], size.x);
        write(1, "\n", 1);
    }

    return 0;
}

// Cikti : 
XXXXX
XFFFX
XFFFX
XXXXX
*/
