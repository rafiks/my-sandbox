#include <iostream>
#include <fstream>
using namespace std;

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

    while (1){
        int line = 0;
        for (i = 1; i <= line && ! file_in.eof(); ++i)
        {
            file_in.getline(input_line,80);
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
        if (line = atoi(c))
        {
            /* code */
        }
    }
    return 0;
}
