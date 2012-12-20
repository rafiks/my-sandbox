#include <iostream>
using namespace std;

void copy(int *p1, int *p2);
int ax[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int ay[10] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

void copy(int *p1, int *p2){
	int n = 10;
	while (n-- >0) {
		*p1++ = *p2++;
	}
}

int main(int argc, const char *argv[])
{
	int *p1 = ax;
	int *p2 = ay;
	int n = 10;

//	while (n-- >0) {
//		cout << *p1 << " " ;
//		p1++;
//	}

	copy(ax, ay);

	while (n-- >0) {
		cout << *p1 << " " ;
		p1++;
	}
	cout << endl;
	return 0;
}
