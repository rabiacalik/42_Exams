#include <stdlib.h>
#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    if(begin_list == NULL || *begin_list == NULL)
        return;

    t_list *cur = *begin_list;

    if(cmp(cur->data, data_ref) == 0)
    {
        *begin_list = cur->next;
        free(cur);
        ft_list_remove_if(begin_list, data_ref, cmp);
    }

    cur = *begin_list;
    ft_list_remove_if(&cur->next, data_ref, cmp);
}


 // Test //
/*
//Bagli listeyi olusturmak ici yardimci fonksiyon
t_list *create_list(int value)
{
    t_list *node = malloc(sizeof(t_list));

    if(node)
    {
        node->data = value;
        node->next = NULL;
    }
    return node;
}

//Bagli listeyi yazdirmak icin yardimci fonksiyon
void print_list(t_list *list)
{
    while(list)
    {
        printf("%d ", list->data);
        list = list->next;
    }
    printf("\n");
}

//Karsilastirma fonksiyonu
int compare_data(void *data1, void *data2)
{
    int *value1 = (int *)data1;
    int *value2 = (int *)data2;
    return (*value1 == *value2);
}

#include <stdio.h>
#include <stdlib.h>

 int main()
 {
    // ornek bagli listeyi olusturuyoruz 1 -> 2 -> 3 -> 2 -> 4
    t_list *list = create_list(1);
    list->next = create_list(2);
    list->next->next = create_list(3);
    list->next->next->next = create_list(2);
    list->next->next->next->next = create_list(4);

    printf("Bağli Liste : ");
    print_list(list);

    int data_to_remove = 2;
    ft_list_remove_if(&list, &data_to_remove, compare_data);

    printf("Deger %d kaldırıldıktan sonra bagli liste : ", data_to_remove);
    print_list(list);

    //Bellegi temizle
    while(list)
    {
        t_list *temp = list;
        list = list->next;
        free(temp);
    }

    return (0);
 }
 */