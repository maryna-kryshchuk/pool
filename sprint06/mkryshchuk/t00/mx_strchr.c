#include <stdio.h>

char *mx_strchr(const char *s, int c) {
    char *str;
    str = (char*)s;
    while(*str != c) {
	if (*str == '\0')
	    return NULL;
        str++;
    }
    return str;
}
  
