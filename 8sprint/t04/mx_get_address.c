#include "get_address.h"

char *mx_get_address(void *p) {
    char *d = 0;
    d = mx_strnew(mx_strlen(p) + 2);
    if (!d)
        return NULL;
    char *res = d;
    *d = '0';
    d++;
    *d = 'x';
    d++;
    char *n = mx_nbr_to_hex((unsigned long) p);
    d = mx_strcpy(d, n);
    return res;
}

