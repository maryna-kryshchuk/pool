void mx_printchar(char c);
void mx_printstr(const char *s);

int main(int argc, char *argv[]) {
    if (argc >= 2) {
        int i = 1;
        while(i < argc) {
	    mx_printstr(argv[i]);
	    mx_printchar('\n');
	    i++;
        }
    }
    else
	return 0;       
}
        
