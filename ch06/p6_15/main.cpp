#include <iostream>
#include <string.h>

#include "birthday.h"
#include "student.h"


int main() {

	Birthday birthdate(7, 15, 2000);
	birthdate.printDate();
	std::cout << ('b' > 'a') && ('c' < 'd'); 
	return 0;
}