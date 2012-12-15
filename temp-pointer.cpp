#include <iostream>
using namespace std;

void convert_temp(double *p);

int main(int argc, const char *argv[])
{
	double temperature = 10;

	cout << temperature << endl;
	convert_temp(&temperature);
	cout << temperature << endl;
	return 0;
}

void convert_temp(double *p){
	*p  = (*p * 1.8) + 32; 
//	return temp;
}

