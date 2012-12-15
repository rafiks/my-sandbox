#include <iostream>
using namespace std;

void triple_it(int *p);

int main(int argc, const char *argv[])
{
	int n = 15;
	
	cout << "Val. of n before tripling: " << n << endl;

	double_it(&n); // pass address of a

	cout << "Val. of n after tripling: " << n << endl;

	return 0;
}

void triple_it(int *p){
	*p = *p * 3;
}
