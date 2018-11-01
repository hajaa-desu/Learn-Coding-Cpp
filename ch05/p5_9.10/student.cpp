#include <iostream>
#include <iomanip>
#include "student.h"

Student::Student(std::string sname)
	: name(sname) {
	score = 0; 
	total_quiz = 0; 
}

Student::Student(std::string sname, int sscore)
	: name(sname) {
	score = sscore;
	total_quiz = 1;
}

std::string Student::get_name() const {
	return name; 
}

void Student::add_quiz(int sscore) {
	score += sscore; 
	total_quiz++; 
}

int Student::get_total_score() const {
	return score; 
}

double Student::get_average_score() const {
	if (score == 0) return 0.0;
	return (double) score / total_quiz; 
}

