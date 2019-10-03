void mx_sort_arr_int(int *arr, int size) {
    int i = 0, j = 0, buff;

    while (i < size - 1) {
  	j = 0;
        while (j < size - i - 1) {
   	    if (arr[j] > arr[j + 1]) {
                buff = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = buff;
            }  
            j++;
        }   
        i++;
    }
}

