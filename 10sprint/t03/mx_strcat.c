#include "file_to_str.h"

char *mx_strcat(char *s1, const char *s2) {
    int i;
    int j;

    i = mx_strlen(s1);
    j = 0;
    while (s2[j] != '\0') {
        s1[i + j] = s2[j];
        j++;
    }
    s1[i + j] = '\0';
    return (s1);
}

