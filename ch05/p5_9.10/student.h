#ifndef STUDENT_H
#define STUDENT_H

#include <string.h>

class Student {

public:
	/** Constructor.

	@param sname Name of student
	*/
	Student(std::string sname);
	
	/** Constructor.
	
	@param sname Name of student
	@param sscore Score of student's first quiz
	*/
	Student(std::string sname, int sscore);
	
	/** Returns the name of student. 
	*/
	std::string get_name() const; 

	/** Add more scores.

	@param sscore the new score
	*/
	void add_quiz(int sscore);

	/** Return total score. 
	*/
	int get_total_score() const; 

	/** Calculates and return average score. 
	*/
	double get_average_score() const;


private:
	std::string name; 
	int score; 
	int total_quiz; 

};


#endif /* STUDENT_H */