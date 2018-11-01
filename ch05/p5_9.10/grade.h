#ifndef GRADE_H
#define GRADE_H

#include <string.h>

class Grade {
public:
	Grade(std::string pgrade);
	void set_gpa(); 
private:
	std::string grade;
	float GPA; 
};

#endif /* GRADE_H */ 