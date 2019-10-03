int mx_sum_digits(int a) {
    if (a == -2147483648)
	return 47;
    if (a < 0)
	a *= -1;
    int res;
    res = 0;
    while(a != 0) {
	res += a % 10;
	a /= 10;
    }
    return res;
}

