#include <stdio.h> 
int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);
char *mx_strnew(const int size);
char *mx_strcat(char *s1, const char *s2);
char *mx_strdup(const char *str);

char *mx_strjoin(char const *s1, char const *s2) {
    if(s1 == NULL && s2 == NULL) 
	return NULL;
    if (s1 == NULL && s2 != NULL)
        return mx_strdup(s2);
    if (s2 == NULL && s1 != NULL)
	return mx_strdup(s1);
    int len = mx_strlen(s1) + mx_strlen(s2);
    char *c = mx_strnew(len);
    c = mx_strcpy(c, s1);
    c = mx_strcat(c, s2);
    return c;
}

