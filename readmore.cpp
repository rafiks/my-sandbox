#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string.h>
using namespace std;


void convert_to_upper(char *s);

int main()
{
    int c;
    int i;

    char filename[81];
    char input_line[81];

    cout << "Enter a filename and press Enter: ";
    cin.getline(filename,80);

    ifstream file_in(filename);

    if (!file_in)
    {
        cout << "FIle " << filename;
        cout << "could not be opened.";
        return -1;
    }

    int lines_to_read = 20; //default 20
    while (1){
        for (i = 1; i <= lines_to_read && ! file_in.eof(); ++i)
        {
            file_in.getline(input_line,80);
            convert_to_upper(input_line);
            cout << input_line << endl;
        }
        if (file_in.eof())
        {
            break;
        }
        cout << "More? (Press 'Q' and Enter to quit.)";
        cin.getline(input_line,80);
        c = input_line[0];
        if (c == 'Q' || c == 'q')
        {
            break;
        }
        else if (strlen(input_line) > 0)
        {
            lines_to_read = atoi(input_line);
        }
    }
    
    return 0;
}

void convert_to_upper(char *s) {
    int i;
    int length = strlen(s);

    for (i = 0; i < length; i++)
        s[i] = toupper(s[i]);
}
