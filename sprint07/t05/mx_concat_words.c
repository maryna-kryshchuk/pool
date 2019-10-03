#include <stdio.h>
#include <stdlib.h>
char *mx_strcat(char *s1, const char *s2);
char *mx_strcpy(char *dst, const char *src);
void mx_strdel(char **str);
char *mx_strdup(const char *str);
char *mx_strjoin(char const *s1, char const *s2);
int mx_strlen(const char *s);
char *mx_strnew(const int size);

char *mx_concat_words(char **words) {
    if (!words)
	return NULL;
    char *res;
    res = mx_strdup(words[0]);
    int i = 1;
    while(words[i] != NULL) {
	char *tmp = res;
        res = mx_strjoin(res, mx_strjoin(mx_strdup(" "), mx_strdup(words[i])));
        mx_strdel(&tmp);
	i++;
    }
    return res;
}

