#include <stdlib.h>
#include <stdio.h>

char *mx_strnew(const int size) {
    char *str;
    if (size < 0)
	return NULL;
    str = malloc(size + 1);
    if(!str)
        return NULL;
    for(int i = 0; i <= size; i++) { 
	str[i] = '\0';
    }
    return str;
}

