#include <iostream>
#include <math.h>

using namespace std;

void get_all_divisors(int n);
int get_lowest_divisors(int n);

int main(int argc, const char *argv[])
{

    int n;
  while(1){
    cout << "Enter a number(0 to exit):" << endl;
    cin >> n;
    if (n == 0){
      break;
    }
    get_all_divisors(n);
    cout << endl;
  }
  return 0;
}

void get_all_divisors(int n){
  int i;
    while (1){
      i = get_lowest_divisors(n);
      cout << i;
      if (i == n) {
        break;
      }
      cout << ", ";
      n=n/i;
    }
}

int get_lowest_divisors(int n){
  int i;
  double sqrt_of_n = sqrt(static_cast<double>(n));
  for (i = 2; i <= sqrt_of_n; i++) 
    if (n % i == 0) 
      return i;
    
    return n;
  
}
