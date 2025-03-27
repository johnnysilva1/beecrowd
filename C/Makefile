CC=gcc
CFLAGS =-Wall -Wextra -std=c99 -ggdb -pedantic

a.out: $(arq) 
	$(CC) $(CFLAGS) -o a.out $(arq) -lm 

test: a.out
	./a.out < in

	
