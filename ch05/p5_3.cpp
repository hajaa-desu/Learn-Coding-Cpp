#include <iostream>
#include <string>
 

class Address{
	public:
		Address(int hno, 
			std::string astreet,
			std::string acity,
			std::string astate,
			int apostal_code);
		Address(int hno, 
			std::string astreet,
			std::string acity,
			std::string astate,
			int apostal_code,
			std::string ano);
		void print() const;
		bool comes_before(Address address); 
	private:	
		int house_no;
		std::string street;
		std::string app_no;
		std::string city;
		std::string state;
		int postal_code;	
		void set_address(int hno, 
			std::string astreet,
			std::string acity,
			std::string astate,
			int apostal_code);
};	

int main() {
	Address address1(27, "Hollys Bvd", "Hollyvood", "Cali", 59210, "A-22");
	address1.print();
	Address address2(1, "Homer's str", "Nothollyvood", "Calistill", 67000);
	address2.print();
	if (address1.comes_before(address2)) {
		std::cout << "address1 comes before address2" << std::endl;
	} else {
		std::cout << "address1 does not come before address2" << std::endl; 
	}
	return 0;
}

Address::Address(int hno, 
			std::string astreet,
			std::string acity,
			std::string astate,
			int apostal_code){
	set_address(hno, astreet, acity, astate, apostal_code);
	app_no = "";
}

Address::Address(int hno, 
			std::string astreet,
			std::string acity,
			std::string astate,
			int apostal_code,
			std::string ano){
	set_address(hno, astreet, acity, astate, apostal_code);
	app_no = ano;
}

void Address::print() const{
	std::cout << "Address: " << std::endl;
	std::cout << "\t" << house_no << " ";
	if (app_no != "") {
		std::cout << app_no; 
	}
	std::cout << std::endl; 
	std::cout << "\t" << street << std::endl;
	std::cout << "\t" << city << " " << state << " " << postal_code << std::endl;
}

bool Address::comes_before(Address address){
	if (postal_code < address.postal_code)
		return true;
	return false; 
}

void Address::set_address(int hno, 
		 std::string astreet, 
		 std::string acity, 
	         std::string astate,
		 int apostal_code) {
	house_no = hno;
	street = astreet;
	city = acity;
	state = astate;
	postal_code = apostal_code; 
}

