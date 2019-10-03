#include <stdlib.h>

char *mx_strnew(const int size) {
    char *str = malloc(size + 1);
    if (str) {
	for(int i = 0; i < size + 1; i++)
	    str[i] = 6;
        return str;
    }
    else    
	return NULL;
}

