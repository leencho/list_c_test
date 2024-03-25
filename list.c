#include "list.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct node node_t;

struct node
{
    node_t *next;
    int item;
};
struct list
{
    node_t *head;
};

list_t *create_list(void)
{
    list_t *list = malloc(sizeof(list_t));
    if (list == NULL)
    {
        printf("could not create list");
    }
    list->head = NULL;
    return list;
}
void remove_list(list_t *list)
{
    node_t *current = NULL;
    node_t *tmp = NULL;
    current = list->head;
    while (current != NULL)
    {
        tmp = current;
        current = current->next;
        free(tmp);
    }
}
int add_list(list_t *list, int item)
{
    node_t *node = malloc(sizeof(node_t));
    if (node == NULL)
    {
        printf("could not create node\n");
    }
    node->item = item;
    node->next = list->head;
    list->head = node;

    return 0;
}

void print_list(list_t *list)
{

    while (list->head != NULL)
    {
        printf("%d -> ", list->head->item);
        list->head = list->head->next;
    }
    printf("NULL");
    printf("\n");
}
