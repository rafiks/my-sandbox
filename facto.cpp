#include <iostream>
//#include <math.h>

using namespace std;

int factorial(int n);

int factorial(int n) {
	int i;
	int sum = 1;

	for (i=1;i<=n;i++){
		sum *=i;
	}
	return sum;
}

int main(){
	int n;
	cout << "enter number:" ;
	cin >> n;
	cout << "factorial is  " << factorial(n);
}

 
