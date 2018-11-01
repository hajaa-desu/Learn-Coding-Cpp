#ifndef BIRTHDAY_H
#define BIRTHDAY_H

#include <string>
/** Birthday class.

Stores a birthday.
*/
class Birthday {
public:

	/** Constructor.
	@param m month.
	@param d day.
	@param y year. 
	*/
	Birthday(int m, int d, int y); 
	
	/** Constructor.
	@param date a string formatted in MM-DD-YYYY 
	*/
	Birthday(std::string date);

	/** Prints birth date. 
	*/
	void printDate();
	
	/** month getter.
	@return month.
	*/
	int getMonth();
	
	/** day getter.
	@return day.
	*/
	int getDay();

	/** year getter.
	@return year.
	*/
	int getYear(); 
	/** month setter.
	@param m the month (valid range [1, 12]).
	@return the month value if valid, otherwise -1. 
	*/
	int setMonth(int m);

	/** day setter.
	@param d the day (valid range depending on month).
	@return the day value if valid, -2 otherwise. 
	*/

	int setDay(int d);

	/** year setter.
	@param y the year. 
	@return the year value is valid, -3 otherwise. 
	*/
	int setYear(int y);

private:
	int month; /**< the month, range: [1, 12]*/
	int day;	/**< the day (validity depends on the month and in case of February, the year*/
	int year;	/**< the year, range < today */
};

#endif /* BIRTHDAY_H */ 