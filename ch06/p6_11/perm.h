#ifndef PERM_H
#define PERH_H

#include <vector>



void permutation_helper(std::vector<int>& prefix, std::vector<int>& to_permute);

/** Prints the permutations of the vector vect. 

@param vect The vector to be permuted. 
*/
void permute(std::vector<int>& vect);


/** Prints the elements in vector vect.

@param vect The vector.
@param par If set to true, then display is block.
*/
void print_vect(std::vector<int>& vect, bool par);

#endif /* PERM_H */
