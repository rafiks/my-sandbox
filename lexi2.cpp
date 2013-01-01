#include <iostream>
#include <string.h>
using namespace std;

//int get_a_string(char *buffer, char *s, int start);
char *get_a_string(char *start_addr, char *dest);

char strs[10][100];

int main(int argc, const char *argv[])
{
	int i;
	int n;
	//int *pos = 0;
	char buffer[200];
	char *p;

	cout << "Enter strings, separated by commas,";
	cout << endl << "and press ENTER: ";
	cin.getline(buffer, 199);

	for (i = 0, p = buffer; i < 10; i++) {
		p = get_a_string(p, strs[i]);
		if (!p) {
			break;
		}
	}
	if (i == 11) 
		n = 10;
	else
		n = i;

	cout << n << " strings were read." << endl;
	for (i = 0; i < n; i++) {
		cout << strs[i] << endl;
	}
	return 0;
}

char *get_a_string(char *start_addr, char *dest){
  char *p = start_addr;
	while(*p == ',' || *p == ' ')
		p++;

	if (*p == '\0') {
	  return (char*) 0;
	//	return -1;
	}

	while( *p != ',' &&  *p != '\0')
    *dest++ = *p++;

	*dest = '\0';
  return p;
}
