int mx_strlen(const char *s);
int mx_strcmp(const char *s1, const char *s2);

int mx_selection_sort(char **arr, int size) {
    int min;
    int shift = 0;
    char *temp;
    for (int i = 0; i < size - 1; i++) {
	min = i;
        for (int j = i + 1; j < size; j++) {
 	    if (mx_strlen(arr[j]) < mx_strlen(arr[min])) {
		min = j;
		shift++;
            }
	    else if (mx_strlen(arr[j]) == mx_strlen(arr[min])) {
		if (mx_strcmp(arr[j], arr[min]) == -1) {
		    min = j;
		    shift++;
                }
            }
        }
        temp = arr[i];
	arr[i] = arr[min];
	arr[min] = temp;
    }
    return shift - 1;
}
#include <stdio.h>
int main() {
    char *arr[] = {"Z", "Abcd", "a", "aBc", "z", "abc", "AbCd"};
   int a = mx_selection_sort(arr, 7);
printf("%d", a);
return 0;
}
