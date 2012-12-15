#include <iostream>
#include <stdlib.h>
#include <unistd.h>

using namespace std;


int pause(void);

int main(int argc, const char *argv[])
{
	int a = 2, b = 3, c = 4;
	int *pa = &a;
	int *pb = &b;
	int *pc = &c;
	cout << "Value of pointer pa is: " << pa << endl;
	cout << "Value of pointer pb is: " << pb << endl;
	cout << "Value of pointer pc is: " << pc << endl;
	cout << "The values of a, b, and c are: ";
	cout << a << ", " << b << ", " << c << endl;

	//system("PAUSE");
	pause();
	return 0;
}

