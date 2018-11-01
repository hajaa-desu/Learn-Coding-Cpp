#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <string>

#include "birthday.h"


bool check_leapyear(int y);
bool check_dateformat(std::string date);

Birthday::Birthday(int m, int d, int y) {
	month = 0; 
	year = 0;
	day = 0;
	this->setYear(y);
	this->setMonth(m);
	this->setDay(d);
}

Birthday::Birthday(std::string date) {

}

void Birthday::printDate() {
	std::cout << std::setw(2) << month; 
	std::cout << "-" << std::setw(2) << day;
	std::cout << "-" << std::setw(4) << year;
}
int Birthday::getMonth() {
	return month;
}

int Birthday::getYear() {
	return year;
}

int Birthday::getDay() {
	return day;
}

int Birthday::setMonth(int m) {
	if ((m < 1) || (m > 12)) {
		fprintf(stderr, "ERROR in file %s in function %s (line %d)\n: invalid month requested.", __FILE__, __func__, __LINE__); 
		return EXIT_FAILURE;
	}
	month = m;
	return month;
}

int Birthday::setYear(int y) {
	year = y;
	return year;
}

int Birthday::setDay(int d) {
	if (day < 0) {
		fprintf(stderr, "ERROR in file %s in function %s (line %d)\n: invalid day requested.", __FILE__, __func__, __LINE__);
		return EXIT_FAILURE;
	}
	if (month == 0) {
		fprintf(stderr, "ERROR in file %s in function %s (line %d)\n: month not set.", __FILE__, __func__, __LINE__);
		return EXIT_FAILURE;
	}
	if (year == 0) {
		fprintf(stderr, "ERROR in file %s in function %s (line %d)\n: year not set.", __FILE__, __func__, __LINE__);
		return EXIT_FAILURE;
	}
	if (month == 2) {
		int daylimit = check_leapyear(year)? 29 : 28;
		if (day > daylimit) {
			fprintf(stderr, "ERROR in file %s in function %s (line %d)\n: invalid day requested.", __FILE__, __func__, __LINE__);
			return EXIT_FAILURE;
		}
	}
	day = d; 
	return day;
}

/** Leap year checker.

@param y a year.
@return true if leapyear. false otherwise. 
*/ 
bool check_leapyear(int y) {
	if ((y % 400) == 0) {
		return true;
	} else if ((y % 4) == 0) {
		return true;
	}
	return false; 
}