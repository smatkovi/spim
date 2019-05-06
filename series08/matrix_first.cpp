#include "matrix_first.hpp"
Matrix::Matrix() 
{
	dim = 0;
	coeff = (double*) 0;
	std::cout << "allocate empty matrix" << "\n";
	type='F';
}

Matrix::Matrix(int dim, char t) 
{
	assert(dim>0);
	this->dim = dim;
	int c=1;
	if(t == 'F')
	{
		coeff = (double*) malloc(dim * dim*sizeof(double) + sizeof(double));
		assert(coeff != (double*) 0);
		for (int j=1; j<=dim; ++j) 
		{
			for (int i=1; i<=dim; ++i) 
			{
				coeff[j*i] = 0;
			}
		}
	}
	else
	{
		coeff = (double*) malloc(dim*(dim+1)/2*sizeof(double) + sizeof(double));
		for(int j=1; j<=dim; j++)
		{
			for(int i=1; i<=dim; i++)
			{
				if(i>=j)
				{
					coeff(c) = 0;
					c++;
				}
			}
		}
	}
	type=t;
	std::cout << "allocate matrix, length " << dim << "\n";
}

Matrix::Matrix(int dim, double init, char t) 
{
	assert(dim>0);
	this->dim = dim;
	int c=1;
	if(t == 'F')
	{
		coeff = (double*) malloc(dim * dim*sizeof(double) + sizeof(double));
		assert(coeff != (double*) 0);
		for (int j=1; j<=dim; ++j) 
		{
			for (int i=1; i<=dim; ++i) 
			{
				coeff[j*i] = init;
			}
		}
	}
	else
	{
		coeff = (double*) malloc(dim*(dim+1)/2*sizeof(double) + sizeof(double));
		for(int j=1; j<=dim; j++)
		{
			for(int i=1; i<=dim; i++)
			{
				if(i>=j)
				{
					coeff(c) = init;
					c++;
				}
			}
		}
	}
	type=t;
	std::cout << "allocate matrix, length " << dim << "\n";
}

Matrix::Matrix(int dim, double init) 
{
	assert(dim>0);
	this->dim = dim;
	coeff = (double*) malloc(dim * dim*sizeof(double) + 1);
	assert(coeff != (double*) 0);
	for (int j=1; j<=dim; ++j) 
	{
		for (int i=1; i<=dim; ++i) 
		coeff[j*i] = init;
	}
	std::cout << "allocate matrix, length " << dim << "\n";
	
}

Matrix::~Matrix() 
{
	if (dim > 0) 
	{
		free(coeff);
	}
	std::cout << "free matrix, length " << dim << "\n";
	
}

int Matrix::size() 
{
	return dim;
}

void Matrix::set(int k, int l, double value) 
{
	assert(k>=0 && k*l<dim-1 && l>=0);
	coeff[k*l] = value;
}

double Matrix::get(int k, int l) 
{
	assert(k>=0 && k*l<dim-1 && l>=0);
	return coeff[k*l];
}

/*double Matrix::norm() 
{
	double norm = 0;
	for (int j=0; j<dim; ++j) 
	{
	norm = norm + coeff[j]*coeff[j];
	
	}
	return sqrt(norm);
	
}
*/
