#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>

using namespace std;

int rand_0toN1(int n);
void draw_object();
int select_next_available(int n);

const char *color[4] = {"red", "blue", "orange", "green"};
const char *shape[2] = {"ball", "cube"};

int object_drawn[8];
int objects_remaining = 8;

int main(int argc, const char *argv[])
{
	int n,i;

	srand(time(NULL));

	while(1) {
		cout << "Enter no. of objects to draw(0 to exit):";
		cin >> n;
		if (n==0)
			break;
		for (i=1;i<=n;i++)
			draw_object();
	}
	return 0;
}

void draw_object(){
	int c;
	int s;
	int n, object;

	n = rand_0toN1(objects_remaining--);
	object = select_next_available(n);
	s = object %  8;
	c = object / 8;
	cout << color[c] << " " << shape[s] << endl;
}

int select_next_available(int n){
	int i = 0;

	while (object_drawn[i])
		i++;
	while (n-- > 0){
		i++;
		while (object_drawn[i])
			i++;
	}
	object_drawn[i] = true;
	return i;
}

int rand_0toN1(int n) {
	return rand() % n;
}
