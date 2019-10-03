#include "file_to_str.h"

char *mx_file_to_str(const char *filename) {
    int fd;
    char buf;
    char *str;
    int count = 0;

    fd = open(filename, O_RDONLY);
    if (fd != -1) {
	while(read(fd, &buf, 1) != 0)
            count++;
       close(fd);
    }
    fd = open(filename, O_RDONLY);
    str = mx_strnew(count + 1);
    if (fd != -1) {
	count = 0;
        while(read(fd, &buf, 1) != 0) {
	    str[count] = buf;
	    count++;
        }
        return str;
    }
    else
        return NULL;
}

