void mx_printstr(const char *s); 
void mx_printchar(char c);
char *mx_strchr(const char *s, int c);

int main(int argc, char *argv[]) {
    if(argc) {
        char *a = argv[0];
	char *p = mx_strchr(a, '/');
        while(p) {
	    a = p + 1;
            p = mx_strchr(a, '/');
        }
        mx_printstr(a);
        mx_printchar('\n');
    }
    return 0;
}

