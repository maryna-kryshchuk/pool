#include "header.h"

int main(int argc, char *argv[]) {
    int fd;
    char buf[BUFSIZ];
    int i = 0;

    if(argc == 1) {
        while(1) {
	    i = read(0, &buf, 1);
	    if (--i < 0)
		exit(0);
            write(1, buf, 1);
	}
    }

    if(argc >= 2) {
	for(int i = 1; i < argc; i++) {
	    fd = open(argv[i], O_RDONLY);
	    if (fd != -1) {
		while(read(fd, buf, 1) != 0)
		    write(1, buf, 1);
                close(fd);
            }
            else {
		mx_printerr("mx_cat: ");
		mx_printerr(argv[i]);
		mx_printerr(": No such file or directory\n");
            }
        }
    }
    return 0;
}

