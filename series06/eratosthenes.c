#include <stdio.h>
#include <math.h>
//#include "eratosthenes.h"

struct _Eratosthenes_
{
	int n_max;
	int n;
	int* primes;
};

void doEratosthenesSieve(int nmax)
{
	int list[nmax], i=0, k=0, temp=0, zeros=0, s=0;
	for(i=0; i<nmax-2; i++) list[i]=i+2;
	i=2;
	while(i<sqrt(nmax))
	{
		for(k=2; k < nmax/i; k++)
		{
			list[k*i-2]=0;
			zeros++;
		}
                temp=0;
		while(temp==0)
		{
			temp=list[i-1];
			i++;
		}

		printf("at primenumber %i \n", i);
	}
	for(s=0; s<nmax; s++) printf("whole list %i\n", list[s]);
        
	int primelist[nmax-zeros-1];
	k=0;
	for(s=0; s<nmax-2; s++)
	{
		if(list[s]!=0)
		{
			//primelist[k]=list[s];
			printf("would fill in this number %i, s=%i\n", list[s], s);
			k++;
		}	

	}
};
int main()
{
	int N;
	scanf("%i", &N);
	doEratosthenesSieve(N);	
	return 0;
}
