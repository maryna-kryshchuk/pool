void mx_printchar(char c);
void mx_printint(int nb);

void mx_print_arr_int(const int *arr, int size) {
    int i = 0;
    while(i < size) {
	mx_printint(arr[i]);
        mx_printchar('\n');
	i++;
    }
}

