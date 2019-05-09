#include "matrix_first.hpp"
#include <iostream>
using std::cout;

void ask(int p);
int x, y;

int main() 
{
	bool state=1, done=0;
	int tie=1;
	Matrix g(3, 'F');
	g.printMatrix();
	while(state == 1)
	{
		while(done != 1)
		{
			ask(1);
			if(g.get(x, y)==0)
			{
				g.set(x, y, 1);
				done=1;
			}
			else
			{
				cout << "this place is already in use" << endl;
			}
		}
		done=0;

		tie++;
		if(tie==6)
		{
			cout << "Tied game" << endl;
			state = 0;
			done=1;
		}
		g.printMatrix();

		while(done != 1)
		{
			ask(2);
			if(g.get(x, y)==0)
			{
				g.set(x, y, 2);
				done=1;
			}
			else
			{
				cout << "this place is already in use" << endl;
			}
		}
		done=0;
		
		if(g.get(0, 0) == g.get(0, 1) && g.get(0, 1) == g.get(0, 2) && g.get(0, 0)!=0)
		{
			state =0;
			cout << g.get(0, 0) << " won" << endl;
		}
		if(g.get(0, 0) == g.get(1, 0) && g.get(1, 0) == g.get(2, 0) && g.get(0, 0)!=0)
		{
			state =0;
			cout << g.get(0, 0) << " won" << endl;
		}
		if(g.get(2, 2) == g.get(1, 2) && g.get(1, 2) == g.get(0, 2) && g.get(0, 2)!=0)
		{
			state =0;
			cout << g.get(2, 2) << " won" << endl;
		}
		if(g.get(2, 2) == g.get(2, 1) && g.get(2, 1) == g.get(2, 0) && g.get(2, 0)!=0)
		{
			state =0;
			cout << g.get(2, 2) << " won" << endl;
		}
		if(g.get(2, 2) == g.get(1, 1) && g.get(1, 1) == g.get(0, 0) && g.get(0, 0)!=0)
		{
			state =0;
			cout << g.get(2, 2) << " won" << endl;
		}
		if(g.get(0, 2) == g.get(1, 1) && g.get(1, 1) == g.get(2, 0) && g.get(0, 2)!=0)
		{
			state =0;
			cout << g.get(2, 0) << " won" << endl;
		}
		if(state==1) g.printMatrix();

	}
	return 0;
}

void ask(int p)
{
	cout << "player " << p << " enter coordinate x" << endl;
	cin >> x;
	cout << "player " << p << " enter coordinate y" << endl;
	cin >> y;
}
