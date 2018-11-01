GCC = g++
GFLAGS = -g -Wall -Wshadow

prog: main.o modvector.o
	$(GCC) $(GFLAGS) main.o modvector.o -o prog

main.o: main.cpp
	$(GCC) $(GFLAGS) -c main.cpp

modvector.o: modvector.cpp
	$(GCC) $(GFLAGS) -c modvector.cpp