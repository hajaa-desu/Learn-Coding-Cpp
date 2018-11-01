GCC = gcc
CFLAGS = -g -Wall -Wshadow 

prog: areDistinct.o main.o
	$(GCC) $(CFLAGS) areDistinct.o main.o -o prog # no -c

areDistinct.o: areDistinct.c
	$(GCC) $(CFLAGS) -c areDistinct.c

main.o: main.c
	$(GCC) $(CFLAGS) -c main.c