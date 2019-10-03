#include "list.h"

int mx_list_size(t_list *list) {
    int count = 0;
    if(list != NULL)
        while(list->next != NULL) {
	    count++;
	    list = list->next;
        }
    return ++count;
}

