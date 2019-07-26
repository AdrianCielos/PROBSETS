#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main ()
{
	float hr1, hr2, hr3, hr4, hr5, hr6, hr7, rt1, rt2, rt3, rt4, rt5, rt6, rt7;
	cout << "Please Input the number of hours of work and the rate of pay of each employee." << endl;
	cout << endl << endl;
	
	cout << "EMPLOYEE 1" << endl;
	cout << "Hours: "; cin >> hr1;
	cout << "Rate of Pay: "; cin >> rt1;
	cout << endl;
	
	cout << "EMPLOYEE 2" << endl;
	cout << "Hours: "; cin >> hr2;
	cout << "Rate of Pay: "; cin >> rt2;
	cout << endl;
	
	cout << "EMPLOYEE 3" << endl;
	cout << "Hours: "; cin >> hr3;
	cout << "Rate of Pay: "; cin >> rt3;
	cout << endl;
	
	cout << "EMPLOYEE 4" << endl;
	cout << "Hours: "; cin >> hr4;
	cout << "Rate of Pay: "; cin >> rt4;
	cout << endl;
	
	cout << "EMPLOYEE 5" << endl;
	cout << "Hours: "; cin >> hr5;
	cout << "Rate of Pay: "; cin >> rt5;
	cout << endl;
	
	cout << "EMPLOYEE 6" << endl;
	cout << "Hours: "; cin >> hr6;
	cout << "Rate of Pay: "; cin >> rt6;
	cout << endl;
	
	cout << "EMPLOYEE 7" << endl;
	cout << "Hours: "; cin >> hr7;
	cout << "Rate of Pay: "; cin >> rt7;
	
	cout << endl << endl;
	cout << "------------------------------------------------------" << endl;
	cout << endl << endl;
	
	cout << setprecision(2) << fixed;
	
	cout << "EMPLOYEE 1" << endl;
	cout << "Weekly Pay: " << "P" << hr1*rt1 << endl;
	cout << endl;
	
	cout << "EMPLOYEE 2" << endl;
	cout << "Weekly Pay: " << "P" <<hr2*rt2 << endl;
	cout << endl;
	
	cout << "EMPLOYEE 3" << endl;
	cout << "Weekly Pay: " << "P" << hr3*rt3 << endl;
	cout << endl;
	
	cout << "EMPLOYEE 4" << endl;
	cout << "Weekly Pay: " << "P" << hr4*rt4 << endl;
	cout << endl;
	
	cout << "EMPLOYEE 5" << endl;
	cout << "Weekly Pay: " << "P" << hr5*rt5 << endl;
	cout << endl;
	
	cout << "EMPLOYEE 6" << endl;
	cout << "Weekly Pay: " << "P" << hr6*rt6 << endl;
	cout << endl;
	
	cout << "EMPLOYEE 7" << endl;
	cout << "Weekly Pay: " << "P" << hr7*rt7 << endl;
	cout << endl;
	
	getch ();
	return 0;
}
