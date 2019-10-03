void mx_printchar(char c);

void mx_str_separate(const char *str, char delim) {

    int i;

    i = 0;
    while(str[i]) {
	if (str [i] == delim)
            mx_printchar('\n');
        else
	    mx_printchar(str[i]);
        i++;
    }
     mx_printchar('\n');
 }
 
