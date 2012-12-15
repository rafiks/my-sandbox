#include <iostream>
using namespace std;

void sort(int n);
void swap(int *p1, int *p2);
int a[10];

int main(int argc, const char *argv[])
{
	int i;
	for (i = 0; i < 10; i++) {
		cout << "Enter array element #" << i << ": ";
		cin >> a[i];
	}
	sort(10);
	cout << "Here are all the array elements, sorted: " << endl;
	for (i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	return 0;
}

void sort(int n){
	int i, j, low;
	for (i = 0; i < n-1; i++) {
		low = i;
		for (j = i + 1; j < n; j++) 
			if (a[j] < a[low]) {
				low = j;
			}
		if (i != low) {
			swap(&a[i], &a[low]);
			}
		
	}
}

void swap(int *p1, int *p2){
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
