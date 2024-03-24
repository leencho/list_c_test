#include "list.h"
#include <stdio.h>

int main()
{

    list_t *list = create_list();

    add_list(list, 3);
    add_list(list, 4);
    print_list(list);

    return 0;
}