/*
 Author: Sighfy
 Project: PC4_2
 Description: Roman Numeral Converter
*/

#include <iostream>

using namespace std;

int main()
{
    int number;
    
    cout << "Enter a number (1 - 10): ";
    cin >> number;
    
    if (number >= 1 && number <= 10)
    {
        cout << "The Roman numeral version of " << number << " is ";
        switch (number)
        {
            case 1:
                cout << "I.\n";
            break;
            case 2:
                cout << "II.\n";
            break;
            case 3:
                cout << "III.\n";
            break;
            case 4:
                cout << "IV.\n";
            break;
            case 5:
                cout << "V.\n";
            break;
            case 6:
                cout << "VI.\n";
            break;
            case 7:
                cout << "VII.\n";
            break;
            case 8:
                cout << "VIII.\n";
            break;
            case 9:
                cout << "IX.\n";
            break;
            case 10:
                cout << "X.\n";
        }
    }
    else
    {
        cout << "Enter a number in the range 1 through 10.\n";
    }
    return 0;
}
