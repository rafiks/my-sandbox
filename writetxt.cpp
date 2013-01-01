#include <iostream>
#include <fstream>
#include "string"
using namespace std;

int main() {
    char filename[81];
    char directory[81];
    char file[81];
    
    cout << "Enter a file name and press ENTER: ";
    cin.getline(filename, 80);
    cout << "Enter a directory and press ENTER: ";
    cin.getline(directory, 80);

    /*strncpy(file,directory);
    strcat(file,filename);*/
    strcpy(file,directory);
    strcat(file,filename);
    ofstream file_out(file);
    if (! file_out) {
        cout << "File " << file << " could not be opened.";
        return -1;
    }
    cout << "File " << file << " was opened.";
    file_out << "I am Blaxxon," << endl;
    file_out << "the cosmic computer." << endl;
    file_out << "Fear me.";
    file_out.close();
    return 0;
}
