#include "list.h"

void mx_clear_list(t_list **list) {
    t_list *nextel;
    t_list *element;
    element = *list;    
    while(element != NULL) {
	nextel = element->next;       
 	free(element);
        element = nextel;
    }
    *list = NULL;
}

