double mx_pow_rec(double n, unsigned int pow) {
    if (pow == 1)
	return n;
    else if (pow == 0)
        return 1;
    else
        return mx_pow_rec (n, pow - 1) * n;
}

