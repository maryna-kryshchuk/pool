#include "list.h"

void mx_pop_front(t_list **list) {
    if(list) {
	t_list *head = *list;
	*list = (*list)->next;
        free(head);
        head = NULL;
    }
}

