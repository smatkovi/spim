#include <cmath>
#include <iostream>
using std::cout;
using std::endl;

class Triangle 
{
	private:
	char city[];
	char university[];
	int num_students;

	public:
	void setCity(char);
	void setUniversity(char);
	void setNum_students(int);
	void graduate();
	void newStudent();
};
int main()
{
	return 0;
}
	
void setUniversity(char u[])
{
	for(int i=0; i<len(u-1); i++)
	{
		university[i]=u[i];
	}
}
void setCity(char u[])
{
	city=u;
}
void setNum_students(int n)
{
	num_students=n;
}
