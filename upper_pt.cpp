#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

void convert_to_lower(char *s);

int main(int argc, const char *argv[])
{
	char s[100];

	cout << "Enter string to convert and press ENTER: ";
	cin.getline(s, 99);

	convert_to_lower(s);
	cout << "The converted string is:" << endl;
	cout << s;

	return 0;
}

void convert_to_lower(char *s){
//	int i;
//	int length = strlen(s);

//	for (i = 0; i < length; i++) {
//		s[i] = tolower(s[i]);
//	}
////	while(*s++)
//		if (*s == '\0') {
//			break;
//		}
	for (;*s; s++) {
	*s = toupper(*s);
	}

}
