#include "list.h"

void mx_push_back(t_list **list, void *data) {
    t_list *mylist = *list;
    t_list *last = mx_create_node(data);
    if (mylist == NULL)
	*list = last;
    else {
	while(mylist->next != NULL)
	    mylist = mylist->next;
        mylist->next = last;
    }
}

