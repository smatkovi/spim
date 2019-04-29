#include <cmath>
#include <algorithm>
#include <iostream>
using std::cout;
using std::endl;
using std::min;
using std::max;

class Ellipse 
{
	private:
	double x[2], a, b;

	public:
	void setX(double, double);
	void setA(double);
	void setB(double);
	double getEccentricity();
	void printFocalPoints();
	bool isCircle();
	bool isInside(double, double);
};
int main()
{
	return 0;
}
	
void Ellipse::setX(double x0, double x1) 
{
	x[0] = x0;
	x[1] = x1;
}

void Ellipse::setA(double y0)
{
	a = y0;
}

void Ellipse::setB(double z0)
{
	b = z0;
}

void Ellipse::printFocalPoints() 
{
	if(a>b) cout << "focal points at" << x[0]+sqrt(pow(a, 2) - pow(b, 2)) << ", " << x[1];
	else cout << "focal points at" << x[0] << "' " << sqrt(pow(b, 2) - pow(a, 2));
}

double Ellipse::getEccentricity() 
{
	return sqrt(1 - pow(min(a, b)/max(a, b), 2));
}

bool Ellipse::isCircle()
{
	if(a==b) return 1;
	else return 0;
}
bool Ellipse::isInside(double f, double s)
{
	if(pow((f-x[0])/a, 2) + pow((s-x[1])/b, 2) <= 1) return 1;
	else return 0;
}
