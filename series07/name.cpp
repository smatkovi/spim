#include <cmath>
#include <iostream>
#include <assert.h>
#include <string.h>
using std::cout;
using std::endl;
using std::abs;

class University 
{
	private:
	char city[];
	char university[];
	int num_students;

	public:
	void setUniversity(char*);
	void setCity(char*);
	void setNum_students(int);
	void graduate();
	void newStudent();
};

int main()
{
	return 0;
}

void University::setUniversity(char* u)
{
	for(int i=0; abs(i)<strlen(u); i++)
	{
		university[i]=u[i];
	}
}

void University::setCity(char* u)
{
	for(int i=0; abs(i)<strlen(u); i++)
	{
		city[i]=u[i];
	}
}
	
void University::setNum_students(int n)
{
	num_students=n;
}

void University::newStudent()
{
	num_students++;
}

void University::graduate()
{
	num_students--;
	assert(num_students>=0);
}
