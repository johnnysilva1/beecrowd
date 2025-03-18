CC=gcc
CFLAGS =-Wall -Wextra -std=c99 -ggdb -pedantic

a.out: $(arq) 
	$(CC) $(CFLAGS) -o a.out $(arq)

in: a.out
	./a.out < in
