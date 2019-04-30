#include <cmath>
#include <iostream>
#include <assert.h>
#include <string.h>
using std::cout;
using std::endl;
using std::abs;

class Customer 
{
	private:
	char name[];
	double balance;
	int pin;

	public:
	void setCustomer(char*);
	void setBalance(double);
	void printBalance();
	void setPin(int);
};

int main()
{
	return 0;
}

void Customer::setCustomer(char* u)
{
	for(int i=0; abs(i)<strlen(u); i++)
	{
		name[i]=u[i];
	}
}
void Customer::setBalance(double b)
{
	balabnce=b;
}
void Customer::printBalance()
{
	cout << balance;
}
void Customer::setPin(int p)
{
	pin=p;
}
