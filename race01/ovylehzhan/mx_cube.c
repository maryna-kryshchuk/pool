void mx_printchar(char c);

void print_horizontal(int size,  int nb) {
    if (nb == 1)
        for (int i = 0; i < size/2 + 1; i++)
 	    mx_printchar(' ');
 	    mx_printchar('+');
 	for (int i = 0; i < size * 2; i++)
  	    mx_printchar('-');
 	    mx_printchar('+');
    if (nb == 2) {
    	for (int i = 0; i < size / 2 ; i++)
   	    mx_printchar(' ');
  	mx_printchar('|');
    }
    mx_printchar('\n');
}

void print_upper(int size) {
    for (int i = 0; i < size / 2; i++) {
        for (int j = 0; j < size / 2 - i; j++)
    	    mx_printchar(' ');
        mx_printchar('/');
        for (int j = 0; j < size * 2; j++)
  	    mx_printchar(' ');
        mx_printchar('/');
        for (int j = 0; j < i; j++)
  	    mx_printchar(' ');
        mx_printchar('|');
 	mx_printchar('\n');
    }
}

void print_frontal(int size) {
    for (int i = 0; i < size; i++) {
  	mx_printchar('|');
        for (int j = 0; j < size * 2; j++)
            mx_printchar(' ');
        mx_printchar('|');
        if ((i <= size / 2 - 1 && size %2 == 0) ||
   	    (i <= size / 2 && size %2 == 1)) {
            for (int j = 0; j < size / 2; j++)
    	        mx_printchar(' ');
            if ((i < size / 2 - 1 && size % 2 == 0) ||
                (i < size / 2 && size % 2 == 1))
                mx_printchar('|');
            else
                mx_printchar('+');
        }
        else {
            for (int j = 0 ; j < size - i - 1; j++)
                mx_printchar(' ');
            mx_printchar('/');
	} 
        mx_printchar('\n');
    }   
}

void mx_cube(int size) {
    if (size > 1) {
 	print_horizontal(size, 1);
  	print_upper(size);
  	print_horizontal(size, 2);
  	print_frontal(size);
 	print_horizontal(size, 3);
    } 
}

