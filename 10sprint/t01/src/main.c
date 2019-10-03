#include "header.h"

int main(int n, char *s[]) {
    if (n != 3) {
	mx_printerr("usage: ./mx_cp [source_file] [target_file]\n");
	exit(1);
    }
    int src = open(s[1], O_RDONLY, 0);
    if (src < 0) {
	mx_printerr("mx_cp");
	mx_printerr(": ");
	mx_printerr(s[1]);
	mx_printerr(": ");
	mx_printerr(strerror(errno));
	mx_printerr("\n");
	exit(1);
    }
    int dst = open(s[2], O_WRONLY);
    if (dst > 0)
	return 0;
    if (dst < 0)
	dst = open(s[2], O_WRONLY | O_CREAT);
    char buf [1];
    int a = read(src, buf, 1);
	while(a > 0) {
	    write(dst, buf, 1);
	    a = read(src, buf, 1);
        }
    close(src);
    close(dst);
    return 0;
}

