int mx_strcmp(const char *s1, const char *s2);

int mx_binary_search(char **arr, int size, const char *s, int *count) {
    int res = -1;
    int last = size - 1;
    int first = 0;
    while(first <= last) {
        *count += 1;
        int mid = (first + last) / 2;
        if (mx_strcmp(arr[mid], s) == 0) {
	    res = mid;
            break;
        }
	else if (mx_strcmp(arr[mid], s) > 0)
	    last = mid - 1;
	else
	    first = mid + 1;
        }
        return res;
}

