#include <iostream>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#define VALUES 300

using namespace std;

int rand_0toN1(int n);

int hits[VALUES];

int main(int argc, const char *argv[])
{
  int n;
  int i;
  int r;

  srand(time(NULL));

  while(1){
  cout << "Enter number of trials to run";
  cout << "and press enter(0 to quit): ";
  cin >> n;
  if (n == 0) {
    break;
  }
  for (i = 1; i <= n; i++) {
    r = rand_0toN1(VALUES);
    hits[r]++;
  }
  for (i = 0; i < VALUES; i++) {
    cout << i << ": " << hits[i] << " Accuracy: ";
    cout << static_cast<double>(hits[i]) / (n / VALUES) << endl;
  }
  return 0;
 }
}


int rand_0toN1(int n) {
  return rand() % n;
}
