#include <iostream>
#include <iomanip>

#include "perm.h"

void permutation_helper(std::vector<int>& prefix, std::vector<int>& to_permute){
	/* 1) If to_permute has no elements, print the elements in prefix. */ 
	if (to_permute.size() == 0){
		print_vect(prefix, true);
	}	else {
	/* 2) For each element e in to_permute, 
		make an array of to_permute2 that is equal to to_permute - e
		and
		an array prefix2 consisting of prefix and e
		*/	
	for (std::vector<int>::iterator e = to_permute.begin(); e != to_permute.end(); e++) {
		std::vector<int> to_permute2;
		std::vector<int> prefix2; 
		/* make an array of to_permute2 that is equal to to_permute - e */  
		for (std::vector<int>::iterator it = to_permute.begin(); it != to_permute.end(); it++) {
			if (it != e)
				to_permute2.push_back(*it); 
		}
		/* make an array prefix2 consisting of prefix and e */
		for (std::vector<int>::iterator it = prefix.begin(); it != prefix.end(); it++){
			prefix2.push_back(*it); 
		}
		prefix2.push_back(*e);
		/* 3) Call permutation helper with prefix2 and to_permute2 */ 
		permutation_helper(prefix2, to_permute2);
	}
	}
}
void permute(std::vector<int>& vect) {
	for (std::vector<int>::iterator e = vect.begin(); e != vect.end(); e++) {
		std::vector<int> pref;
		pref.push_back(*e);

		std::vector<int> to_perm;
		for (std::vector<int>::iterator it = vect.begin(); it != vect.end(); it++) {
			if (it != e)
				to_perm.push_back(*it); 
		}
		permutation_helper(pref, to_perm);
	}
}

void print_vect(std::vector<int>& vect, bool par){
	std::string lnbreak = "";
	if (par == true) {
		lnbreak = "\n";
	}
	//std::cout << lnbreak;
	for (int i=0; i < (int)vect.size(); i++) {
		std::cout << std::setw(5) << vect[i];
	}
	std::cout << lnbreak;
}