#include <stdio.h>
#include <stdlib.h>

int *mx_copy_int_arr(const int *src, int size) {
    int *str;

    if(size <  0 || !src)
	return NULL;
    str = malloc(size * sizeof(int));
    if(!str)
	return NULL;
    for(int i = 0; i < size; i++) 
	str[i] = src[i];
    return str;
}

