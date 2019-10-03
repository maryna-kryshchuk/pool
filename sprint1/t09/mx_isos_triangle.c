void mx_printchar(char c);

void mx_isos_triangle(unsigned int length, char c) {
    if (c >= 32 && c <= 127) {
	unsigned int i = 1;
	while(i <= length) {
	    unsigned int j = 0;
	    while(j < i) {
		mx_printchar(c);
		j++;
	    }
	    mx_printchar('\n');
	    i++;
	}
    }
} 
