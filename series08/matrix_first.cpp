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
					coeff[c] = 0;
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
					coeff[c] = init;
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
	assert(k>=0 && k*dim+l<dim-1 && l>=0);
	if(type=='F') coeff[k*dim+l] = value;
	else
	{
		if(type=='U')
		{
			assert(k<=l);
			coeff[k*dim+l - k*(k+1)/2] = value;
		}
		else
		{
			assert(k>=l);
			coeff[k*dim+l - k*(2*dim + k)/2] = value;
		}
	}
}

double Matrix::get(int k, int l) 
{
	assert(k>=0 && k*dim+l<dim-1 && l>=0);
	return coeff[k*dim+l];
	if(type=='F') return coeff[k*dim+l];
	else
	{
		if(type=='U')
		{
			assert(k<=l);
			return coeff[k*dim+l - k*(k+1)/2];
		}
		else
		{
			assert(k>=l);
			return coeff[k*dim+l - k*(2*dim + k)/2];
		}
	}
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
void Matrix::scanMatrix(int n, char t)
{
	double value;
	if(t=='F')
	{
		for(int k=0; k<=n; k++)
		{
			for(int l=0; l<=n; l++)
			{
				cout << "enter value for row " << k << ", column" << l << endl;
				cin >> value;
				coeff[k*dim+l] = value;
			}
		}
	}
	else
	{
		if(t=='U')
		{
			for(int k=0; k<=n; k++)
			{
				for(int l=0; l<=n; l++)
				{
					if(l>=k)
					{
						cout << "enter value for row " << k << ", column" << l << endl;
						cin >> value;
						coeff[k*dim+l - k*(k+1)/2] = value;
					}
				}
			}
		}
		else
		{
			for(int k=0; k<=n; k++)
			{
				for(int l=0; l<=n; l++)
				{
					if(l<=k)
					{
						cout << "enter value for row " << k << ", column" << l << endl;
						cin >> value;
						coeff[k*dim+l - k*(2*dim + k)/2] = value;
					}
				}
			}
		}
	}
}

void Matrix::printMatrix()
{
	if(type=='F')
	{
		for(int k=0; k<dim; k++)
		{
			for(int l=0; l<dim; l++)
			{
				cout << coeff[k*dim+l];
			}
		}
	}
	else
	{
		if(type=='U')
		{
			for(int k=0; k<dim; k++)
			{
				for(int l=0; l<dim; l++)
				{
					if(l>=k)
					{
						cout << coeff[k*dim+l - k*(k+1)/2] << " ";
					}
					else cout << "0 ";
				}
				cout << endl;
			}
		}
		else
		{
			for(int k=0; k<dim; k++)
			{
				for(int l=0; l<dim; l++)
				{
					if(l<=k)
					{
						cout << coeff[k*dim+l - k*(2*dim + k)/2] << " ";
					}
					else cout << "0 ";
				}
				cout << endl;
			}
		}
	}
}

double Matrix::rowSumNorm()
{
	double v=0;
	double m=0;
	if(type=='F')
	{
		for(int k=0; k<dim; k++)
		{
			for(int l=0; l<dim; l++)
			{
				 v += fabs(coeff[k*dim+l]);
			}
			if(v>m) m=v;
			v=0;
		}
	}
	else
	{
		if(type=='U')
		{
			for(int k=0; k<dim; k++)
			{
				for(int l=0; l<dim; l++)
				{
					if(l>=k)
					{
						v += fabs(coeff[k*dim+l - k*(k+1)/2]);
					}
					if(v>m) m=v;
					v=0;
				}
			}
		}
		else
		{
			for(int k=0; k<dim; k++)
			{
				for(int l=0; l<dim; l++)
				{
					if(l<=k)
					{
						v += fabs(coeff[k*dim+l - k*(2*dim + k)/2]);
					}
					if(v>m) m=v;
					v=0;
				}
			}
		}
	}
	return m;
}

double Matrix::columnSumNorm()
{
	double v=0;
	double m=0;
	if(type=='F')
	{
		for(int l=0; l<dim; l++)
		{
			for(int k=0; k<dim; k++)
			{
				 v += fabs(coeff[k*dim+l]);
			}
			if(v>m) m=v;
			v=0;
		}
	}
	else
	{
		if(type=='U')
		{
			for(int l=0; l<dim; l++)
			{
				for(int k=0; k<dim; k++)
				{
					if(l>=k)
					{
						v += fabs(coeff[k*dim+l - k*(k+1)/2]);
					}
					if(v>m) m=v;
					v=0;
				}
			}
		}
		else
		{
			for(int l=0; l<dim; l++)
			{
				for(int k=0; k<dim; k++)
				{
					if(l<=k)
					{
						v += fabs(coeff[k*dim+l - k*(2*dim + k)/2]);
					}
					if(v>m) m=v;
					v=0;
				}
			}
		}
	}
	return m;
}

double Matrix::frobeniusNorm()
{
	double v=0;
	if(type=='F')
	{
		for(int k=0; k<dim; k++)
		{
			for(int l=0; l<dim; l++)
			{
				 v += fabs(coeff[k*dim+l]);
			}
		}
	}
	else
	{
		if(type=='U')
		{
			for(int k=0; k<dim; k++)
			{
				for(int l=0; l<dim; l++)
				{
					if(l>=k)
					{
						v += fabs(coeff[k*dim+l - k*(k+1)/2]);
					}
				}
			}
		}
		else
		{
			for(int k=0; k<dim; k++)
			{
				for(int l=0; l<dim; l++)
				{
					if(l<=k)
					{
						v += fabs(coeff[k*dim+l - k*(2*dim + k)/2]);
					}
				}
			}
		}
	}
	return sqrt(v);
}

double Matrix::trace()
{
	double v=0;
	if(type=='F')
	{
		for(int k=0; k<dim; k++)
		{
			for(int l=0; l<dim; l++)
			{
				 if(k==l) v += coeff[k*dim+l];
			}
		}
	}
	else
	{
		if(type=='U')
		{
			for(int k=0; k<dim; k++)
			{
				for(int l=0; l<dim; l++)
				{
					if(l==k)
					{
						v += coeff[k*dim+l - k*(k+1)/2];
					}
				}
			}
		}
		else
		{
			for(int k=0; k<dim; k++)
			{
				for(int l=0; l<dim; l++)
				{
					if(l==k)
					{
						v += coeff[k*dim+l - k*(2*dim + k)/2];
					}
				}
			}
		}
	}
	return v;
}

bool Matrix::isDiagonal()
{
	bool d=1;
	if(type=='F')
	{
		for(int k=0; k<dim; k++)
		{
			for(int l=0; l<dim; l++)
			{
				 if(k!=l && coeff[k*dim+l]!=0)
				 {
					 d=0;
					 k=dim;
				 }
			}
		}
	}
	else
	{
		if(type=='U')
		{
			for(int k=0; k<dim; k++)
			{
				for(int l=0; l<dim; l++)
				{
					if(l!=k && coeff[k*dim+l - k*(k+1)/2]!=0)
					{
						d=0;
						k=dim;
					}
				}
			}
		}
		else
		{
			for(int k=0; k<dim; k++)
			{
				for(int l=0; l<dim; l++)
				{
					if(l!=k && coeff[k*dim+l - k*(2*dim + k)/2]!=0)
					{
						d=0;
						k=dim;
						l=dim;
					}
				}
			}
		}
	}
	return d;
}

bool Matrix::isSymmetric()
{
	bool d=1;
	if(type=='F')
	{
		for(int k=0; k<=dim/2; k++)
		{
			for(int l=0; l<dim; l++)
			{
				 if(coeff[k*dim+l] != coeff[l*dim+k])
					{
						d=0;
						k=dim;
						l=dim;
					}
			}
		}
	}
	else
	{
		if(type=='U')
		{
			if( !this->isDiagonal() ) d=0;
		}
		else
		{
			if( !this->isDiagonal() ) d=0;
		}
	}
	return d;
}

bool Matrix::isSkewSymmetric()
{
	bool d=1;
	if(type=='F')
	{
		for(int k=0; k<=dim/2; k++)
		{
			for(int l=0; l<dim; l++)
			{
				 if(coeff[k*dim+l] != -coeff[l*dim+k])
					{
						d=0;
						k=dim;
						l=dim;
					}
			}
		}
	}
	else
	{
		if( !this->isDiagonal() ) d=0;
		else
		{
			for(int i=0; i < dim*(dim+1)/2; i++)
			{
				if(coeff[i]!=0)
				{
					d=0;
					i = dim*(dim+1)/2;
				}
			}
		}
	}
	return d;
}
