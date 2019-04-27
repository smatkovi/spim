#include <cmath>
#include <iostream>
using std::cout;
using std::endl;

class Triangle 
{
	private:
	string city;
	string university;
	int num_students;

	public:
	void setCity(string);
	void setUniversity(string);
	void setNum_students(int);
	void graduate();
	void newStudent();
};
int main()
{
	Triangle t;
	t.setX(0, 0);
	t.setY(3, 0);
	t.setZ(3, 3);
	cout << "A=%f, P=%f, lateral=%i\n" << t.getArea() << endl << t.getPerimeter() << endl << t.isEquilateral() << endl;
	return 0;
}
	
void setUniversity(string)
{
	
}
