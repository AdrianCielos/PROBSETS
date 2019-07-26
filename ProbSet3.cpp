#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	float x, y, z;
	cout << "Please Enter THREE desired integers." << endl;	
	cout << "1. "; cin >> x;
	cout << "2. "; cin >> y;
	cout << "3. "; cin >> z;
	cout << endl << endl;
	
	if (x > y && x > z)
	{
		cout << "The LARGEST number among the three is " << x << "." << endl;
	}
	else if (y > x && y > z)
	{
		cout << "The LARGEST number among the three is " << y << "." << endl;
	}
	else if (z > x && z > y)
	{
		cout << "The LARGEST number among the three is " << z << "." << endl;
	}
	
	if (x < y && x < z)
	{
		cout << "The SMALLEST number among the three is " << x << "." << endl;
	}
	else if (y < x && y < z)
	{
		cout << "The SMALLEST number among the three is " << y << "." << endl;
	}
	else if (z < x && z < y)
	{
		cout << "The SMALLEST number among the three is " << z << "." << endl;
	}
	
	float ave;
	ave = ((x+y+z)/3);
	cout << "The AVERAGE of the three integers is " << ave << "." << endl;
	
	getch ();
	return 0;
	
}

