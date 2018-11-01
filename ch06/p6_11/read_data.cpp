#include<iostream>
#include <vector>


void init_vect(std::vector<int>& vect, int n){
	for (int i = 0; i < n; i++) {
		vect.push_back(i+1);
	}
}