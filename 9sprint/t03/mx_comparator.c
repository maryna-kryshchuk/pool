#include <stdbool.h>

int mx_comparator(const int *arr, int size, int x, bool (*compare)(int, int)) {
    for (int j = 0; j < size; j++) {
        if(compare(arr[j], x))
	    return j;
    }
    return -1;
}  

