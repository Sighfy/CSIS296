/*
 Author: Sighfy
 Project: PC5_2
 Description: Characters for the ASCII Codes
*/

#include <iostream>

using namespace std;

int main()

{
    int asciiVal;
    char asciiChar;
    
    cout << "Characters for the ASCII Codes\n";
    
    for (asciiVal = 32; asciiVal <= 126; asciiVal++)
    {
        if (asciiVal % 16 == 1)
        {
            cout << endl;
        }

        asciiChar = asciiVal;
        cout << asciiChar;
    }
    cout << endl;
    return 0;
}
