#include <iostream>
#include <fstream>
#include <cstdlib>
#include "string.h"
using namespace std;

int get_int(int default_value);
char name[20];

int main(int argc, char const *argv[])
{
    char filename[81];
    int n;
    int age;
    int recsize = sizeof(name) + sizeof(int);

    cout << "Enter file name: ";
    cin.getline(filename, 80);

    fstream fbin(filename, ios::binary | ios::in | ios::out);
    if (!fbin)
    {
        cout << "Could not open file " << filename;
        return -1;
    }
    //Get record tnumber to write
    cout << "Enter file record number: ";
    n = get_int(0);

    //get  data from end user
    cout << "Enter name: ";
    cin.getline(name, 19);
    cout << "Enter age: ";
    age = get_int(0);

    //write data
    fbin.seekp(n * recsize);
    fbin.write(name, 20);
    fbin.write(reinterpret_cast<char*>(&age), sizeof(int));
    fbin.close();

    return 0;
}

int get_int(int default_value){
    char s[81];

    cin.getline(s, 80);
    if (strlen(s) == 0)
    {
        return default_value;
    }
    return atoi(s);
}
