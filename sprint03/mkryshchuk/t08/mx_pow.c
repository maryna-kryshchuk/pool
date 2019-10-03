double mx_pow(double n, unsigned int pow) {
    if (pow == 0)
	return 1;
    while(pow > 1) {
	n *= n;
	pow--;
    }
    return n;
}

