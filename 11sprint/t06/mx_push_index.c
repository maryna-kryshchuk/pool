#include "list.h"

void mx_push_index(t_list **list, void *data, int index) {
    if (index == 0) {
	mx_push_front(list, data);
        return;
    }
    t_list *tmp = mx_create_node(data);
    t_list *curr = *list;
    t_list *c;
    for(int i = 0; i < index - 1 && curr->next != NULL; i++)
        curr = curr->next;
    if (curr->next != NULL) {
	c = curr->next;
	curr->next = tmp;
	tmp->next = c;
    }
    else
        mx_push_back(list, data);
}
   
