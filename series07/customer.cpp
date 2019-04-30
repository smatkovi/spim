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
	bool checkPin(int);
	void drawMoney(double);
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
	balance=b;
}
void Customer::printBalance()
{
	cout << balance;
}
void Customer::setPin(int p)
{
	pin=p;
}
bool Customer::checkPin(int p)
{
	if(pin==p) return 1;
	else return 0;
}
void Customer::drawMoney(double m)
{
	assert(m>=0 && balance-m>=0);
	balance-=m;
	if(balance<10.) cout << "warning balance<10Eur";
}
