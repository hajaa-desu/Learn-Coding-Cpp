#ifndef MODVECTOR_H
#define MODVECTOR_H

#include <iostream>
#include <stdlib.h>

#include <string>
#include <vector>


/** Removes item at vect[i] if i is within the range of its size.

@param i Index of vector
@param vect The vector to be modified
@return 0 if success
*/
int vect_remove(int i, std::vector<double>& vect);

/** Prints out all values in vector. 

@param vect The vector to be printed.
*/
void vect_print(const std::vector<double>& vect, std::string message);

/** Add an item in vector at position i.

@param item an element to be added to vector. 
@param vect a vector to be modified.
*/
void vect_add(double item, std::vector<double>& vect)

#endif /* MODVECTOR_H */