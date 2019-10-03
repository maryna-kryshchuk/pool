#include <stdbool.h>
bool mx_isspace(char c);
bool mx_isdigit(int c);

int mx_atoi(const char *str) {
    int res;
    int negative;

    negative = 1;
    res = 0;
    while (*str && mx_isspace(*str))
        str++;
    if (*str == '-')
        negative = -1;
    if (*str == '-' || *str == '+')
        str++;
    while (*str && mx_isdigit(*str)){
        res = res * 10 + (*str - 48);
        str++;
    }
    return (res * negative);
}

