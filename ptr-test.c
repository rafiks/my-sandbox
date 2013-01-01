#include <stdio.h>

void swap(int *x, int *y);

int main(int argc, const char *argv[])
{
  int x = 1;
  int y = 2;

  swap(&x, &y);
  return 0;
}

void swap(int *x, int *y){
  int temp;

  temp = *x;
  *x = *y;
  *y = temp;
}
