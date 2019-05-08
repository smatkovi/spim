#ifndef _MATRIX_FIRST_
#define _MATRIX_FIRST_

#include<cmath>
#include<cstdlib>
#include<cassert>
#include<iostream>

using std::cout;
using std::cin;
using std::endl;
using std::fabs;
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
	Matrix(int dim, double init, char t);
	Matrix(int dim, double init);
	Matrix(int dim, char t);
	~Matrix();

	// return vector dimension
	int size();

	// read and write vector coefficients
	void set(int k, int l, double value);
	double get(int k, int l);
	void scanMatrix(int n, char t);	
	void printMatrix();	
	double rowSumNorm();
	double columnSumNorm();
	double frobeniusNorm();
	double trace();
	bool isDiagonal();
	bool isSymmetric();
	bool isSkewSymmetric();

	// compute Euclidean norm
	////////////////double norm();
};
#endif
