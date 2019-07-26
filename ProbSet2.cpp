#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	float w, x, y, z;
	cout << "Please Input any Four(4) POSITIVE Integer." << endl;
	cout << "1. "; cin >> w;
	cout << "2. "; cin >> x;
	cout << "3. "; cin >> y;	
	cout << "4. "; cin >> z;	
	cout << endl;
	
	float ave;
	ave =((w+x+y+z)/4);
	
	if (x >= 0 && x <= 9999 && y >= 0 && y <= 9999 && w >= 0 && w <= 9999 && z >= 0 && z <= 9999)
	{
		cout << "The AVERAGE of all positive integers is " << ave << "." << endl;
	}
	else
	{
		cout << "Please Input Positive Integer ONLY!!!" << endl;
	}
	
	getch ();
	return 0;
}
