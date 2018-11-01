GCC = g++
GFLAGS = -g -Wall -Wshadow

prog: main.o message.o mailbox.o
	$(GCC) $(GFLAGS) main.o message.o mailbox.o -o prog

main.o: main.cpp
	$(GCC) $(GFLAGS) -c main.cpp

message.o: message.cpp 
	$(GCC) $(GFLAGS) -c message.cpp

mailbox.o: mailbox.cpp
	$(GCC) $(GFLAGS) -c mailbox.cpp