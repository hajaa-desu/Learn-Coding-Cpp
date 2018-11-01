GCC = g++
GFLAGS = -g -Wall -Wshadow

prog: main.o student.o
	$(GCC) $(GFLAGS) main.o student.o -o prog

main.o: main.cpp
	$(GCC) $(GFLAGS) -c main.cpp

student.o: student.cpp
	$(GCC) $(GFLAGS) -c student.cpp