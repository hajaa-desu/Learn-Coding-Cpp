#include <iostream>
#include <string>

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

int main() {

	Person baby("Jungkook", 20);
	std::cout << "Detail of person: " 
			  << baby.get_name() << std::endl;
	std::cout << "Age: " 
			  << baby.get_age() << std::endl; 
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
