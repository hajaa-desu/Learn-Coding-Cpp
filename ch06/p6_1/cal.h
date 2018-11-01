#ifndef CAL_H
#define CAL_H

const int MAX_CAPACITY = 100; 

double scalar_product(const std::vector<double>& a, const std::vector<double>& b, int a_size, int b_size); 

/** Computes alternating sums. 

@param arrlist Reference to a vector. 
@return Total alternating sum of type double. 
*/
double alternating_sum(const std::vector<double>& dat, int dat_size);

/** Reverses a vector.
@param arrlist The vector to be reversed. 
@param arr_size Size of vector. 
*/
void reverse(std::vector<double>& arrlist, int arr_size); 

/** Combine two vectors.
@param a First vector.
@param b Second vector.
*/
std::vector<double> append(std::vector<double>& a, std::vector<double>& b);

/** Read data by user input.

@param dat Reference to the vector to store data to.
@param dat_size Current size of the data. 
@param max_capacity The maximum capacity of dat.
*/ 
int read_data(std::vector<double>& dat, int& dat_size, int max_capacity);

/** Reade data from file. 

@param infile Input file name.
@param dat Reference to the vector to store data to.
@param dat_size Current size of data. 
@param max_capacity The maximum capacity of data. 
@return -1 if failure, 0 if success. 
*/ 
int read_data_from_file(const char* filename, std::vector<double>& dat, int& dat_size, int max_capacity); 

/** Print vector.

@param arrlist The reference to the vector.
*/
void print_vect(const std::vector<double>& vect, int vect_size); 
#endif /* CAL_H */ 
