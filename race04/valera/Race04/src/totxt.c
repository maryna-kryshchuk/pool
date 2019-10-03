#include "header.h"

char *mx_tostring(char *nameoffile) {
    int counter = 0;
    int src = open(nameoffile,O_RDONLY);
    char buf;
    char *error = "map does not exist";
    int dst = read(src , &buf, sizeof(char));
    if (dst < 1)
    	return error;
    while(dst > 0) {
        if (buf == '.' || buf == '#' || buf == '\n' ) {
        	if (buf == '\n')
        		
        	++counter;
        	dst = read (src, &buf, sizeof(char));
        } else if (buf == ',') {
            dst = read (src, &buf, sizeof(char));
        } else {
        	close(src);
        	error = "map error";
        	return error; 
        }
    }
    char *string = (char *)malloc(sizeof(char) * counter + 1);
    dst = read(src, &buf, sizeof(char));
    for(int i = 0; (i < counter) && (dst > 0);) {
        if (buf == '.' || buf == '#' || buf == '\n') {
        	string[i] = buf;
        	i++;
        }
        dst = read(src, &buf, sizeof(char));
    }
    string[counter] = '\0';
    close(src);
    return string;
}

