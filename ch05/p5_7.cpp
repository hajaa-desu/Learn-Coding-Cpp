#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>

const double PI = 3.142; 

class SodaCan {
public:
	SodaCan(double sheight, double sradius);
	double get_height() const;
	double get_radius() const;
	double get_surface_area() const; 
	double get_volume() const;  
private:
	double height;
	double radius;
};

int main(int argc, char ** argv) {
	SodaCan can(7, 2); 
	std::cout << std::setprecision(2) << std::fixed;
	printf("Soda can data: %.2f (height) %.2f (radius)\n", can.get_height(), can.get_radius()); 
	std::cout << "\tSurface area: " << can.get_surface_area() << std::endl;
	std::cout << "\tVolume: " << can.get_volume() << std::endl;
	return 0;
}


SodaCan::SodaCan(double sheight, double sradius) {
	height = sheight;
	radius = sradius; 
}

double SodaCan::get_height() const{
	return height; 
}

double SodaCan::get_radius() const{
	return radius;
}

double SodaCan::get_surface_area() const{
	return (PI * pow(radius, 2) * 2) + (PI * height);  
}

double SodaCan::get_volume() const{
 	return PI * pow(radius, 2) * height;  
}

