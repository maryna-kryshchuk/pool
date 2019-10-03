int mx_factorial_iter(int n) {
    int i , q = 1;
    if (n > 12 || n <= 0) 
	return 0;
    for(i = 2; i <= n; i++) {
	q = q * i;
    }
    return q;
}


