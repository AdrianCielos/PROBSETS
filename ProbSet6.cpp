#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	float x, y;
	cout << "Please Enter TWO Real Numbers." << endl;
	cout << "1. "; cin >> x;
	cout << "2. "; cin >> y;
	cout << endl;
	
	int z;
	cout << "Please Select a code among the following: [1] [2] [3]" << endl; 
	cout << "Selected Code: "; cin >> z;
	cout << endl << endl;
	
	switch (z)
	{
		case 1:
			cout << "You have a sum of " << x+y << "." << endl;
			break;
			
		case 2:
			cout << "You have a product of " << x*y << "." << endl;
			break;
			
		case 3:
			cout << "You have a qoutient of " << x/y << "." << endl;
			break;
			
		default:
			cout << "INVALID CODE!!!" << endl;
			break;
	}
	
	getch ();
	return 0;
}
