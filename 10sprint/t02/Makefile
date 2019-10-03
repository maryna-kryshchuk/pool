NAME = mx_cat

SRCS = src/main.c src/mx_printerr.c src/mx_strlen.c src/mx_printstr.c
SRCSOB = main.c mx_strlen.c mx_printerr.c mx_printstr.c

INC = inc/header.h
INCOB = header.h

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

all: install clean
install:
	@cp $(SRCS) .
	@cp $(INC) .
	@clang $(CFLAGS) -o $(NAME) $(SRCSOB) -I $(INCOB)
uninstall: clean
	@rm -rf $(NAME)
clean:
	@rm -rf $(INCOB)
	@rm -rf $(SRCSOB)
reinstall: uninstall clean all

