#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

//area of circle = pi*r^2
//circumference of circle = 2*pi*r

int main()
{
	cout << "AREA AND CIRCUMFERENCE OF A CIRCLE" << endl;
	cout << endl << endl;
	
	float diameter;
	cout << "Please Input Diameter of the Circle." << endl;
	cout << "Diameter: "; cin >> diameter;
	cout << endl << endl;
	
	cout << setprecision(2) << fixed;
	
	float pi, r, area, circumference;
	pi = 3.14;
	r = diameter/2;
	area = pi*r*r;
	circumference = 2*pi*r;
	
	cout << "AREA OF THE CIRCLE: " << area << endl;
	cout << "CIRCUMFERENCE OF THE CIRCLE: " << circumference << endl;
	
	
	
	
	
	
	getch ();
	return 0;
}
