int mx_sqrt(int x) {
    if (x <= 0) 
	return 0;
    int i = 1;
    while(1) {
	if (i * i < x)
	    i++;
	else if (i * i > x)
	    return 0;
	else
	    return i;
    }
}

