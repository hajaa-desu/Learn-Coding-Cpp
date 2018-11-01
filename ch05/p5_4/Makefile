GCC = g++
GFLAGS = -g -Wall -Wshadow 

# for p5_4.cpp
p5_4_exe: p5_4.o Account.o
	$(GCC) $(GFLAGS) p5_4.o Account.o -o p5_4_exe

p5_4.o: p5_4.cpp
	$(GCC) $(GFLAGS) -c p5_4.cpp

Account.o: Account.cpp
	$(GCC) $(GFLAGS) -c Account.cpp

clean_p5_4:
	rm -rf *.o  p5_4_exe
