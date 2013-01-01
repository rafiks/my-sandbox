#include <stdio.h>
#include <string.h>

#define MAXLINES 5000

char *lineptr[MAXLINES]; /*this means that this is an array of Maxline ,with each element is a pointer to a char */

int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);

void qsort(char *lineptr[], int left, int right);

/* sort input lines */

int main(int argc, const char *argv[])
{
  int nlines;

  if ((nlines = readlines(lineptr, MAXLINES)) >= 0) {
    qsort(lineptr, 0, nlines -1);
    writelines(lineptr, nlines);
    return 0;
  } else {
    printf("error: input too big to sort\n");
    return 1;
  }
  return 0;
}

#define MAXLEN 1000 /* max length of input line */

int gtline(char *, int);
char *alloc(int);

int readlines(char *lineptr[], int maxlines)
{
  int len, nlines;
  char *p, line[MAXLEN];

  nlines = 0;
  while ((len = gtline(line,MAXLEN)) > 0) {
    if (nlines >= maxlines || (p = alloc(len)) == NULL) {
      return -1;
    } else {
      line[len-1] = '\0';
      strcpy(p, line);
      lineptr[nlines++] = p;
    }
  }
}
