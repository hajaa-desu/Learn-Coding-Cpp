#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <algorithm>
#include <vector>

#include "cal.h"

std::vector<int> append(const std::vector<int>& a, const std::vector<int>& b){
	std::vector<int> result; 
	result.reserve(a.size() + b.size());
	result.insert(result.end(), a.begin(), a.end());
	result.insert(result.end(), b.begin(), b.end());
	return result;
}

std::vector<int> merge(const std::vector<int>& a, const std::vector<int>& b){
	std::vector<int> result;
	result.reserve(a.size() + b.size()); 
	std::vector<int>::const_iterator a_curr = a.begin(); 
	std::vector<int>::const_iterator b_curr = b.begin(); 
	std::vector<int>::const_iterator excess; 
	std::vector<int>::const_iterator excess_end; 
	while ((a_curr != a.end()) && (b_curr != b.end())){
		//result[i++] = *a_curr;
		//result[i++] = *b_curr;
		result.push_back(*a_curr);
		result.push_back(*b_curr);
		a_curr++;
		b_curr++; 
	}
	if ((a_curr == a.end()) && (b_curr == a.end())) return result;
	if (a_curr == a.end()) {
		excess = b_curr;
		excess_end = b.end();
	}
	else {
		excess = a_curr;
		excess_end = a.end(); 
	} 
	while (excess != excess_end) {
		result.push_back(*excess);
		excess++;
	}
	return result; 
}


std::vector<int> merge_sorted(const std::vector<int>& a, const std::vector<int>& b){
	std::vector<int> result;
	result.reserve(a.size() + b.size());
	result = merge(a, b);
	std::sort(result.begin(), result.begin() + result.size());
	return result;
}


bool equals(const std::vector<int>& a, std::vector<int>& b){
	if (a.size() != b.size())
		return false;
	std::vector<int>::const_iterator a_curr = a.begin();
	std::vector<int>::const_iterator b_curr = b.begin(); 
	for (; a_curr != a.end();){
		if (*a_curr != *b_curr) {
			return false; 
		}
		a_curr++;
		b_curr++;
	}
	return true; 
}

bool same_set(const std::vector<int>& a, const std::vector<int>& b){
	std::vector<int> setA(a);
	std::vector<int> setB(b); 
	std::sort(setA.begin(), setA.end());
	setA.erase(std::unique(setA.begin(), setA.end()), setA.end()); 
	std::sort(setB.begin(), setB.end());
	setB.erase(std::unique(setB.begin(), setB.end()), setB.end());
	if (setA == setB) {
		return true;
	}
	return false; 
}


bool same_elements(const std::vector<int>& a, const std::vector<int>& b){
	/* Check for multiplicity */
	std::vector<int> A(a); 
	std::vector<int> B(b); 
	std::sort(A.begin(), A.end()); 
	std::sort(B.begin(), B.end()); 
	if (A != B) 
		return false; 
	/* Check for order */
	int i = 0;
	int a_size = A.size(); 
	int b_size = B.size(); 
	while (i < (a_size - 1)) {
		int j = 0;
		while ((A[i] != B[j]) && (j < a_size)){
			j++; 
		}
		if (j < (b_size - 1)) {
			if (A[i+1] == B[j+1])
				return true; 
		}
		i++; 
	}
	return false;
}

void print_vector(const std::vector<int>& dat){
	std::cout << std::setprecision(2) << std::fixed;
	int k = 0;  
	for (std::vector<int>::const_iterator i = dat.begin(); i != dat.end(); i++){
		printf("\t[%2d] ", k++);
		std::cout << std::setw(4) << *i << std::endl; 
	}
}

void remove_duplicates(std::vector<int>& a){
	std::sort(a.begin(), a.end());
	a.erase(std::unique(a.begin(), a.end()), a.end()); 
}