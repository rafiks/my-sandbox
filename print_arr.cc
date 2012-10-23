#include <iostream>
using namespace std;

int main(int argc, const char *argv[])
{
  int i;
  int sum =0;
  double scores[7]= {};

  for (i = 0; i < 7; i++) {
    cout << "Enter your values: " << endl;
    cin >> scores[i];
  }

  for (i = 0; i < 7; i++) {
    cout << scores[i] << endl;
    sum += scores[i];
  }
  cout << sum <<endl;
  return 0;
}
