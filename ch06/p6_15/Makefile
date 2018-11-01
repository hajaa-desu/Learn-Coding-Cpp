GCC = g++
GFLAGS = -g -Wall -Wshadow

prog: main.o student.o birthday.o
	$(GCC) $(GFLAGS) main.o student.o birthday.o -o $@

main.o: main.cpp
	$(GCC) $(GFLAGS) -c main.cpp

student.o: student.cpp
	$(GCC) $(GFLAGS) -c student.cpp

birthday.o: birthday.cpp
	$(GCC) $(GFLAGS) -c birthday.cpp
