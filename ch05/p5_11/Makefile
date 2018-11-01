GCC = g++
GFLAGS = -g -Wall -Wshadow

prog: main.o Country.o
	$(GCC) $(GFLAGS) main.o Country.o -o prog

main.o: main.cpp
	$(GCC) $(GFLAGS) -c main.cpp 

Country.o: Country.cpp
	$(GCC) $(GFLAGS) -c Country.cpp

