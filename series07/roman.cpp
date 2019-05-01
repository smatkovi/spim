#include <cmath>
#include <algorithm>
#include <iostream>
#include <string.h>
using std::cout;
using std::endl;
using std::min;
using std::max;
using std::abs;

char* int2roman(int n);
int roman2int(char* s);

int main()
{
	return 0;
}
	
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

int roman2int(char* s)
{
	int n=0;
	for(int i=0; abs(i)<abs(strlen(s)); i++)
	{
		while(s[i]=='M') n+=1000;	
		if(s[i]=='C' && s[i+1]=='M')
		{
			n+=900;	
			i++;
		}
		if(s[i]=='D') n+=500;	
		if(s[i]=='C' && s[i+1]=='D')
		{
			n+=400;	
			i++;
		}
		while(s[i]=='C') n+=100;	
		if(s[i]=='X' && s[i+1]=='C')
		{
			n+=90;	
			i++;
		}
		if(s[i]=='L') n+=50;	
		if(s[i]=='X' && s[i+1]=='L')
		{
			n+=40;	
			i++;
		}
		while(s[i]=='X') n+=10;	
		if(s[i]=='I' && s[i+1]=='X')
		{
			n+=9;	
			i++;
		}
		if(s[i]=='V') n+=5;	
		if(s[i]=='I' && s[i+1]=='V')
		{
			n+=4;	
			i++;
		}
		while(s[i]=='I') n+=1;	
	}		
	return n;
}
