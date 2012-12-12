#include <iostream>
using namespace std;

int main() {
	double ctemp, ftemp;
	cout << "Input a Fahrenheit temp and press enter:";
	cin >> ftemp;
	//ftemp = (ctemp * 1.8) + 32;
	ctemp = (ftemp - 32)/1.8;
	cout << "Celcius temp is:" << ctemp;

	return 0;

}
