#include"list.h"
#include<stdlib.h>
#include<stdio.h>



typedef struct node node_t;

struct node{
    node_t *next;
    int item; 
};
struct list{
    node_t *head;
    
};

list_t * create_list(void)
{
    printf("called this");
    list_t *list = malloc(sizeof(list_t));
    if(list == NULL){
        printf("could not create list");
    }
    list->head = NULL;
    list->head->item = 0;
    printf("list is created");
    return list;
}
//int remove_list(list_t *list){

//}
int add_list(list_t *list, int item){
    node_t *node = malloc(sizeof(node_t));
    if(node == NULL){
        printf("could not create node\n");
    }
    node->item = item;
    node->next = list->head;
    list->head = node;

    return 0;
    

}
/*
void print_list(list_t *list){

    while(list->head != NULL){
        printf("%d -> \n", list->head->item);
        list->head = list->head->next;
    }

}
*/
