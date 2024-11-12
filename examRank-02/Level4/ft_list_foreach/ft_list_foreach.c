#include <stdlib.h>
#include "ft_list.h"

void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *list_ptr;

    list_ptr = begin_list;

    while(list_ptr)
    {
        (*f)(list_ptr->data);
        list_ptr = list_ptr->next;
    }
}

/*
 // Test //

#include <stdio.h>

void print_data(void *data)
{
    printf("%d ", *(int *)data);
}

int main()
{
    //Bağlı listeyi oluştur
    t_list *node1 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));
    t_list *node3 = malloc(sizeof(t_list));

    int data1 = 10;
    int data2 = 20;
    int data3 = 30;

    node1->data = &data1;
    node1->next = node2;
    node2->data = &data2;
    node2->next = node3;
    node3->data = &data3;
    node3->next = NULL;

    //bagli listenin verilerini yazdir
    ft_list_foreach(node1, print_data);

    return (0);
}

*/