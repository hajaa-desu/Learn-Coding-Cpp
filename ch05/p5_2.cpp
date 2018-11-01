#include <iostream>
#include <string>


#include <stdio.h>

class Person {
public:
	Person();
	Person(std::string pname, int page);
	std::string get_name() const;	
	int get_age() const; 

private:
	std::string name;
	int age;
};

class PEmployee {
public:
	PEmployee();
	PEmployee(std::string employee_name, int employee_age, double initial_salary);
	void set_salary(double new_salary); 
	double get_salary() const;
	std::string get_name() const; 
	Person get_personal_info() const;
private:
	Person person_data; 
	double salary; 
};

int main() {
	PEmployee employee1("Emily Fart", 27, 3000);
	printf("\t Name: %s Age: %d Salary: %.2f \n",
			employee1.get_name().c_str(),
			employee1.get_personal_info().get_age(),
			employee1.get_salary());
	return 0; 
}

Person::Person(){
	age = 0; // implicit parameter this_object.age
}

Person::Person(std::string pname, int page){
	name = pname; 
	age = page; 
}

std::string Person::get_name() const { // make sure to include const for accessors
	return name;
}

int Person::get_age() const {
	return age;
}

PEmployee::PEmployee(){
}

PEmployee::PEmployee(std::string employee_name, int employee_age, double initial_salary) 
	: person_data(employee_name, employee_age)
{
	salary = initial_salary;
}

void PEmployee::set_salary(double new_salary){
	salary = new_salary; 
}

double PEmployee::get_salary() const {
	return salary;
}

std::string PEmployee::get_name() const {
	return person_data.get_name(); 
}

Person PEmployee::get_personal_info() const {
	return person_data; 
}