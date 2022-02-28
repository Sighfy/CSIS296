/*
 Author: Sighfy
 Project: PC5_23
 description: Pattern Displays
*/

#include <iostream>

using namespace std;

int main()
{
    for (int row = 0; row <= 10; row++)
    {
        for (int col = 0; col < row; col++)
        {
            cout << "+";
        }
        cout << endl;
    }
    cout << endl;
    for (int row = 11; row >= 0; row--)
    {
        for (int col = 1; col < row; col++)
        {
            cout << "+";
        }
        cout << endl;
    }
    return 0;
}
