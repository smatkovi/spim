#ifndef _MATRIX_FIRST_
#define _MATRIX_FIRST_

#include<cmath>
#include<cstdlib>
#include<cassert>
#include<iostream>

// The class Matrix stores vectors in Rd

class Matrix 
{
private:
	// dimension of the vector
	int dim;
	// dynamic coefficient vector
	double* coeff;
	char type;
public:
	// constructors and destructor
	Matrix();
	Matrix(int dim, double init = 0);
	~Matrix();

	// return vector dimension
	int size();

	// read and write vector coefficients
	void set(int k, double value);
	double get(int k);

	// compute Euclidean norm
	////////////////double norm();
};
#endif
