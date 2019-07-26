#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	int row, col, x, y;
	cout << "HOW MANY ROWS: "; cin >> row;
	cout << "HOW MANY COLUMNS: "; cin >> col;
	cout << endl;
	
	for (x = 1; x <= row; x++)
	{
		cout << "*";
		
		for (y = 1; y < col; y++)
		{
			cout << "*";
			
		}
		cout << endl;
	}
	
	getch ();
	return 0;
}
