#include <iostream>

using namespace std;

int gcf (int a, int b);

int main(){
    int a=0,b=0;
    while (1){
      cout << "Enter number(0 to exit): " << endl;
      cin >> a;
      if (a==0){
        break;
      }
      cout << "Enter another number:" << endl;
      cin >> b;
      cout << "GCF is " << gcf(a,b) << endl;
    }
    return 0;
}
int gcf(int a,int b){
  int c=a%b;
    cout << "GCF ("<< a <<", "<<b<<") =>"<<endl;
  if (c==0){
    return b;
  } else {
    return gcf(b, c);
  }
}
