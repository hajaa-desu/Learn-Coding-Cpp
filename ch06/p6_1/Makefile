GCC = g++
GFLAGS = -g -Wall -Wshadow

prog: main.o cal.o
	$(GCC) $(GFLAGS) main.o cal.o -o prog

main.o: main.cpp
	$(GCC) $(GFLAGS) -c main.cpp

cal.o: cal.cpp
	$(GCC) $(GFLAGS) -c cal.cpp

test: prog
	./prog a_vect b_vect

clean:
	rm -rf *.o 
