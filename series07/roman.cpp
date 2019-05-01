#include <cmath>
#include <algorithm>
#include <iostream>
using std::cout;
using std::endl;
using std::min;
using std::max;

char* int2roman(int n)
{
	char* r = new char[15];
	int j=0;
	for(int i=0; i<4; i++)
	{
		while(n>pow(10, 3-i))
		{
			n-=pow(10, 3-i);
			if(i==0) r[j]='M';
			if(i==1) r[j]='C';
			if(i==2) r[j]='X';
			if(i==3) r[j]='I';
			j++;
		}
		while(n>9*pow(10, 2-i))
		{
			n-=9*pow(10, 2-i);
			if(i==0)
			{
				r[j]='C';
				j++;
				r[j]='M';
			}
			if(i==1)
			{
				r[j]='X';
				j++;
				r[j]='C';
			}
			if(i==2)
			{
				r[j]='I';
				j++;
				r[j]='X';
			}
			j++;
		}
		while(n>5*pow(10, 2-i))
		{
			n-=5*pow(10, 2-i);
			if(i==0) r[j]='D';
			if(i==1) r[j]='L';
			if(i==2) r[j]='V';
			j++;
		}
		while(n>4*pow(10, 2-i))
		{
			n-=4*pow(10, 2-i);
			if(i==0)
			{
				r[j]='C';
				j++;
				r[j]='D';
			}
			if(i==1)
			{
				r[j]='X';
				j++;
				r[j]='L';
			}
			if(i==2)
			{
				r[j]='I';
				j++;
				r[j]='V';
			}
			j++;
		}	
	}
	return r;
}

int main()
{
	return 0;
}
	
