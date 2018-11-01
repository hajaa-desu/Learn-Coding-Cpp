#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "birthday.h"

/** Student class.

Stores a student info.
*/
class Student {
public:

	/** name setter.
	@param n the name.
	@return name if success, -1 otherwise.
	*/
	std::string setName(char** n);
	
	/** birthday setter.
	@param b the birthday in the format MM-DD-YYYY.
	@return birthday if success, -2 otherwise.
	*/  
	Birthday setBirthday(std::string date); 

private:
	std::string name; /**< the student name */
	Birthday birthday; /**< the student birthday */

};

#endif /* STUDENT_H */