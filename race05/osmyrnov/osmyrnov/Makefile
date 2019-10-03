NAME = race05

SRCS = src/main.c src/mx_strlen.c
SRCSOB = main.c mx_strlen.c

INC = inc/header.h
INCOB = header.h

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic -lcurses

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
 
