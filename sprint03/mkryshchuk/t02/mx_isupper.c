#include <stdbool.h>

bool mx_isupper(int c) {
    if (c >= 'A' && c <= 'Z') 
	return 1;
    else
	return 0;
}

