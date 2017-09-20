CC=gcc
CFLAGS=-Wall
DEPS = list.h 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

list_make: list_test.o list.o
	gcc -o list_make list_test.o list.o 
