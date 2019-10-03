#include "list.h"

t_list *mx_sort_list(t_list *list, bool (*cmp)(void *a, void *b)) {
    if (list == NULL || cmp == NULL)
	return NULL;
    for(t_list *i = list; i->next != NULL; i = i->next) {
        t_list *h = i;
	for(t_list *k = i->next; k != NULL; k = k->next) {
	    if (cmp(h->data, k->data))
		h = k;
            void *t = h->data;
	    h->data = i->data;
            i->data = t;
        }
    }
    return list;
}

