all:
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -c src/*.c
	ar -cr minilibmx.a *.o

install:
	install minilibmx.a ./minilibmx

uninstall:
	rm -rf ./minilibmx

clean:
	rm -rf *.o *.a

reinstall:
	make clean
	make uninstall
	make all
	make install

