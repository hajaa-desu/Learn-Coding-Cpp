GCC = g++
GFLAGS = -g -Wall -Wshadow
OBJ = main.o cal.o read_data.o
SRC = main.cpp cal.cpp read_data.cpp


prog: $(OBJ)
	$(GCC) $(GFLAGS) $(OBJ) -o prog

main.o: main.cpp
	$(GCC) $(GFLAGS) -c main.cpp

cal.o:	cal.cpp
	$(GCC) $(GFLAGS) -c cal.cpp

read_data.o: read_data.cpp
	$(GCC) $(GFLAGS) -c read_data.cpp

test: prog
	./prog a_vect b_vect

test2: prog
	./prog a_vect c_vect

test3: prog
	./prog a_vect d_vect

test4: prog
	./prog c_vect e_vect

testp691: prog
	./prog a_vect f_vect

testp692: prog
	./prog a_vect g_vect 

clean:
	rm -rf *.o