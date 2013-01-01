#include <stdio.h>

/* count characters in input ; 1st versin*/

int main(int argc, const char *argv[])
{
  long nc;

  nc = 0;

  while (getchar() != EOF) {
    ++nc;
  }
  printf("%ld\n", nc);
  return 0;
}
