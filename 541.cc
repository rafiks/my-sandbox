#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <time.h>

using namespace std;

void draw_a_ball();
int rand_0toN1(int n);

char *color[4] = {"blue", "red", "green", "orange"};
char *shape[2] = {"ball", "cube"};

int main(int argc, const char *argv[])
{
  int n, i;
  srand(time(NULL));

  while (1) {
    cout << "Enter a number(0 to exit): " << endl;
    cin >> n;
    if (n == 0) {
      break;
    }
    for (i = 0; i < n; i++) {
      draw_a_ball();
    }
  }
  return 0;
}

void draw_a_ball(){
  int c;
  int s;
  int item;

  item = rand_0toN1(8);
  c = item % 4;
  s = item / 4;

  cout << "You picked a " << color[c] << " " << shape[s] << endl;
}

int rand_0toN1(int n){
  return rand() % n;
}
