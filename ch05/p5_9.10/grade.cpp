#include "grade.h"

Grade::grade(std::string pgrade) 
	: grade(pgrade) {
	set_gpa(); 
}

void Grade::set_gpa() {
	if (grade == "A") {
		GPA = 4.0;
	} else if (grade == "B") {
		GPA = 3.0;
	} else if (grade == "C") {
		GPA = 2.0;
	} else {
		GPA = 0.0
	}
}