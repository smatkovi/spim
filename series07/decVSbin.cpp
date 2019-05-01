#include <cmath>
#include <algorithm>
#include <iostream>
#include <string.h>
using std::cout;
using std::endl;
using std::min;
using std::max;
using std::abs;

char* dec2bin(int n);
int dec2bin(char* s);

int main()
{
	return 0;
}
	
char* dec2bin(int n)
{
	char* r = new char[16];
	int j=0;
	for(int i=0; i<16; i++)
	{
		if(n>=pow(2, 15-i))
		{
			n-=pow(2, 15-i);
			r[j]='1';
		}	
		else r[j]='0';	
		j++;
	}
	return r;
}

int dec2bin(char* s)
{
	int n=0;
	for(int i=0; abs(i)<abs(strlen(s)); i++) if(s[i]=='1') n+=pow(2, 15-i);
	return n;
}
