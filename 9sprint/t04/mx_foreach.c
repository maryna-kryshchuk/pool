void mx_foreach(const int *arr, int size, void (*f)(int)) {
    for(int j = 0; j < size; j++)
	f(arr[j]);
}

