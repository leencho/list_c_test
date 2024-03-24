#ifndef _LIST_H_
#define _LIST_H_
typedef struct list list_t;
list_t * create_list(void);
int remove_list(list_t *list);
int add_list(list_t *list, int item);
//void print_list(list_t *list);
#endif 