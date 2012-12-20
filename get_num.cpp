#include <iostream>
#include <string.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int get_number();

int main(int argc, const char *argv[])
{
	int x;

	for (;;) {
		cout << "Enter a number (press ENTER to exit): ";
		x = get_number();
		if (x == 0) {
			break;
		}
		cout << "The  square root of x is: " << sqrt(x);
		cout << endl;
	}
	return 0;
}

int get_number(){
	char s[100];

	cin.getline(s, 99);
	if (strlen(s) == 0) {
		return 0;
	}
	return atoi(s);
}
