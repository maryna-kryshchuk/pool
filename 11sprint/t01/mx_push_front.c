#include "list.h"

void mx_push_front(t_list **list, void *data) {
    t_list *nextlist;
    nextlist = mx_create_node(data);
    if (!list)
	nextlist->next = NULL;
    else
        nextlist->next = *list;
    *list = nextlist;
}

