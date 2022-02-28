/*
 Author: Sighfy
 Project: PC4_4
 Description: Areas of Rectangles
*/

#include <iostream>

using namespace std;

int main()
{
    double length1, width1, length2, width2, area1, area2;
    
    cout << "Enter the length of the 1st rectangle: ";
    cin >> length1;
    cout << "Enter the width of the 1st rectangle: ";
    cin >> width1;
    cout << "Enter the length of the 2nd rectangle: ";
    cin >> length2;
    cout << "Enter the width of the 2nd rectangle: ";
    cin >> width2;
    
    area1 = length1 * width1;
    area2 = length2 * width2;
    
    if (area1 == area2)
    {
        cout << "The areas are the same.\n";
    }
    else if (area1 > area2)
    {
        cout << "The 1st rectangle has the greater area.\n";
    }
    else
    {
        cout << "The 2nd rectangle has the greater area.\n";
    }
    
    return 0;
}

/*
 Enter the length of the 1st rectangle: 20
 Enter the width of the 1st rectangle: 25
 Enter the length of the 2nd rectangle: 18
 Enter the width of the 2nd rectangle: 27
 The 1st rectangle has the greater area.
 Program ended with exit code: 0
*/
