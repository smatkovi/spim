#include <cmath>
#include <iostream>
#include <assert.h>
#include <string.h>
using std::cout;
using std::endl;
using std::abs;

class Name 
{
	private:
	char first_name[];
	char surname[];

	public:
	void setName(char*);
	void printName();
};

int main()
{
	return 0;
}

void Name::setName(char* u)
{
	int i=0, j=0, k=0, ws=0, a=0;//ws: #(whitspaces)
	while(u[i]!=' ')i++;
	ws++;
	while(u[i+j]!=' ')j++;
	if(strlen(u)>abs(i+j+1))
	{
		ws++;
		while(u[k]!=' ')k++;
	}
	assert(ws<3);
	for(a=0; a<i; a++)
	{
		first_name[a]=u[a];
	}
	if(ws==1)
	{
		for(a=0; a<j; a++)
		{
			surname[a]=u[i+a];
		}
		
	}
	else
	{
		first_name[i]=' ';
		for(a=0; a<j; a++)
		{
			first_name[i+a]=u[i+a];
		}

		for(a=0; a<k; a++)
		{
			surname[a]=u[i+j+a];
		}
	}
}


void Name::printName()
{
	char u[strlen(first_name)];
	int i=0;
	while(first_name[i]!=' ')
        {
		cout << first_name[i];
		i++;
	}
	cout << " " << first_name[i+2] << ". ";

	for(i=0; i<strlen(first_name); i++)
	{
		cout << surname[i];
	}
          
}
