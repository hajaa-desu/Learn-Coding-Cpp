#ifndef CAL_H
#define CAL_H


#include <vector>

/** Returns a combined vector a and b. 

@param a A vector.
@param b Another vector. 
*/
std::vector<int> append(const std::vector<int>& a, const std::vector<int>& b);

/** Alternatively merge two vectors.

@param a A vector. 
@param b Another vector. 
*/
std::vector<int> merge(const std::vector<int>& a, const std::vector<int>& b);

/** Merge sort two vectors.

@param a A vector.
@param b Another vector. 
*/ 
std::vector<int> merge_sorted(const std::vector<int>& a, const std::vector<int>& b); 

/** Checks whether two vectors have the same elements in the same order.

@param a A vector.
@param b Another vector. 
@return false if the two vectors aren't the same 
*/ 
bool equals(const std::vector<int>& a, std::vector<int>& b);

/** Prints content of vector. 

@param dat The vector to print. 
*/
void print_vector(const std::vector<int>& dat);

/** Returns true if same set.

@param a A vector.
@param b Another vector. 
@return fales if different set.
*/
bool same_set(const std::vector<int>& a, const std::vector<int>& b);

/** Checks if two vectors have the same elements in some order, 
with the same multiplicities.

@param a A vector.
@param b Another vector. 
*/
bool same_elements(const std::vector<int>& a, const std::vector<int>& b);

/** Remove duplicates

@param a A vector.
*/
void remove_duplicates(std::vector<int>& a);

#endif /* CAL_H */