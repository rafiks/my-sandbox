#include <iostream>
#include <math.h>

using namespace std;

int factor(int n);

int main(int argc, const char *argv[])
{
  while(1){
    int  n;
    cout << "Enter a number(0 to exit):" << endl;
    cin >> n;
    if (n == 0){
      break;
    }
   cout << "factorial=" <<  factor(n) << endl;
    return 0;
  }
}

int factor(int n){
  if (n > 1) {
    return n * factor(n - 1);
  } else {
    return 1;
  }

}
