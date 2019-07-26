#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	int x, y;
	cout << "Please Input desired Integer to generate its multiplication table." << endl;
	cout << endl;
	
	cout << "Enter a number: "; cin >> x;
	cout << "Multiplication Table of " << x << ":" << endl;

	for (y=1; y <= 10; y++)
	{
		cout << y << " * " << x << " = " << y*x << endl;
	}
	
	
	
	
	getch ();
	return 0;
}
