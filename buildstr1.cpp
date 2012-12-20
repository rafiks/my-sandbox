#include <iostream>
#include <cstring>
//#include <string.h>


#define STRMAX 599

using namespace std;

int main(int argc, const char *argv[])
{
	char str[STRMAX+1];
	char name[100];
	char addr[200];
	char work[200];
	
	cout << "Enter name and press ENTER: ";
	cin.getline(name, 99);
	cout << "Enter address and press ENTER: ";
	cin.getline(addr, 199);
	cout << "Enter workplace and press ENTER: ";
	cin.getline(work, 199);

	strncpy(str, "\nMy name is ",STRMAX);
	strncat(str, name, STRMAX - strlen(str));
	strcat(str,", I live at ");
	strncat(str, addr, 199 - strlen(str));
	strcat(str, ",\nand I work at ");
	strncat(str, work, 199 - strlen(str));
	strcat(str, ".");

	cout << str;

	return 0;
}
