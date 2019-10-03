#ifndef HEADER_H
#define HEADER_H
#include <fcntl.h>
#include<stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int mx_strlen(const char *s);
void mx_printerr(const char *s);

#endif

