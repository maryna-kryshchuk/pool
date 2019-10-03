void mx_printchar(char c);

void mx_printint(int nb) {
    char a[10];
    int i = 0;
    int f = 1;
    if (nb == 0)
	mx_printchar('0');
    if (nb < 0) {
	nb = -nb;
        f = -1;
    }
    while(nb % 10 > 0) {
	a[i] = (nb % 10) + '0';
	nb /= 10;
	i++;
    }
    if (f < 0)
	mx_printchar('-');
    for(i = 9; i >= 0; i--) {
	if (a[i] >= '0' && a[i] <='9')
	    mx_printchar(a[i]);
    }
}

