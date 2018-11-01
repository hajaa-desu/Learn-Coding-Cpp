#include <iostream>
#include <iomanip>


#include "message.h"
#include "mailbox.h"


int main(int argc, char ** argv) {
	Message message("cemrs@usm.edu.my", "hamora.1507@gmail.com");
	message.append("Hi Dad, \n");
	message.append("How are you? \n");
	message.append("I need money. ");
	message.print();
	return 0;
}