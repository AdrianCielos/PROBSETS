#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	float x;
	cout << "Please Enter an Integers." << endl;	
	cout << "1. "; cin >> x;
	cout << endl << endl;
	
	if (x >= 56 && x <= 78)
	{
		cout << "YOU WIN!!!" << endl;
	}
	else 
	{
		cout << "YOU LOSE!!!" << endl;
	}
	
	getch ();
	return 0;
	
}

