#include <iostream>
using namespace std;

void double_it(int *p);

int main(int argc, const char *argv[])
{
	int a = 5, b = 6;
	
	cout << "Val. of a before doubling: " << a << endl;
	cout << "Val. of b before doubling: " << b << endl;

	double_it(&a); // pass address of a
	double_it(&b); // pass address of b

	cout << "Val. of a after doubling: " << a << endl;
	cout << "Val. of b afrer doubling: " << b << endl;

	return 0;
}

void double_it(int *p){
	*p = *p * 2;
}
