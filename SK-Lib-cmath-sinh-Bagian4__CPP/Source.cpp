// C++ program to demonstrate the
// sinh() function when a string is passed
#include <iostream>
#include <cmath>
#include <conio.h>

/*	Source by GeeksForGeeks
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

using namespace std;

int main() {
	string x = "gfg";
	double result;

	result = sinh(x);
	cout << "sinh(x) = " << result << endl;

	return 0;
}
