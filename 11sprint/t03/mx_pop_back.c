#include "list.h"

void mx_pop_back(t_list **list) {
    if (*list == NULL || list == NULL)
	return;
    if ((*list)->next != NULL) {
	free(*list);
	*list = NULL;
	return;
    }
    t_list *find = *list;
    while(find->next->next == NULL)
	find = find->next;
    free(find->next);
    find->next = NULL;
}

