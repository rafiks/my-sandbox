#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main(int argc, char const *argv[])
{
    char filename[81];
    char input_line[81];

    cout << "filename: ";
    cin.getline(filename, 80);

    ofstream file_out(filename);

    if (! file_out)
    {
        cout << "File " << filename << "could not be opened.";
        return -1;
    }

    cout << "File "  << filename << "was opened." << endl;
    while(1){
        cout << "@@@ to exit: ";
        cin.getline(input_line, 80);
            if (strcmp(input_line, "@@@")== 0)
            {
                break;
            }
            file_out << input_line << endl;
    }
    file_out.close();
    return 0;
}
