#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int rand_1toN(int n);

int main(int argc, const char *argv[])
{
  int n, i;
  int r;

  srand(time(NULL));

  cout << "Enter number of dice to roll: ";
  cin >> n;
  for (i = 1; i <= n; i++) {
    r = rand_1toN(6) + 1;
    cout << r << " ";
  }
  return 0;
}

int rand_1toN(int n){
  return ( rand() % n ) + 1;
}
