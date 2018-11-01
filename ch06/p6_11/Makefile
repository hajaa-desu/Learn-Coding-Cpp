GCC = g++
GFLAGS = -g -Wall -Wshadow
OBJ = main.o perm.o read_data.o

prog: main.o perm.o read_data.o
	$(GCC) $(GFLAGS) $(OBJ) -o prog

main.o: main.cpp
	$(GCC) $(GFLAGS) -c main.cpp

perm.o: perm.cpp
	$(GCC) $(GFLAGS) -c perm.cpp

read_data.o: read_data.cpp
	$(GCC) $(GFLAGS) -c read_data.cpp

clean:
	rm -rf *.o
