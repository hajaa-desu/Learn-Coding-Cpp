GPP = g++
GFLAGS = -g -Wall -Wshadow

p5_7: main.o car.o
	$(GPP) $(GFLAGS) main.o car.o -o p5_7

main.o: main.cpp
	$(GPP) $(GFLAGS) -c main.cpp

car.o: car.cpp
	$(GPP) $(GFLAGS) -c car.cpp
