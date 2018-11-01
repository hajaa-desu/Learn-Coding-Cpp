GCC = g++
GFLAGS = -g -Wall -Wshadow

prog: main.o perm.o
	$(GCC) $(GFLAGS) main.o perm.o -o prog

main.o: main.cpp
	$(GCC) $(GFLAGS) -c main.cpp 

perm.o: perm.cpp
	$(GCC) $(GFLAGS) -c perm.cpp

clean:
	rm -rf *.o
