#include "header.h"

int main(int c, char *s[]) {
    if (c != 2) {
	mx_printerr("usage: ./read_file [file_path]\n");
	return 0;
    }
    char buf[BUFSIZ];
    int n;
    int fd = open(s[1], O_RDONLY, 0);
    if (fd < 0) {
	mx_printerr("error\n");
        return 0;
    }
    while ((n = read(fd, buf, BUFSIZ)) > 0)
	write(1, buf, n);
    close(fd);
    return 0;
}

