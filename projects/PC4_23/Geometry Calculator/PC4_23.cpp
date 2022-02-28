/*
 Author: Sighfy
 Project: PC4_23
 Description: Geometry Calculator
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const double PI = 3.14159;
    
    const int CIRCLE_CHOICE = 1,
    RECTANGLE_CHOICE = 2,
    TRIANGLE_CHOICE = 3,
    QUIT_CHOICE = 4;
    
    int choice;
    double area, radius, length, width, base, height;
    
    cout << "Geometry Calculator\n"
    << "1. Calculate the area of a Circle\n"
    << "2. Calculate the area of a Rectangle\n"
    << "3. Calculate the area of a Triangle\n"
    << "4. Quit\n"
    << "\nEnter your choice (1-4): ";
    cin >> choice;
    
    switch (choice)
    {
        case CIRCLE_CHOICE:
        cout << "Enter the circle's radius: ";
        cin >> radius;
        if (radius < 0)
        {
            cout << "Run the program again and"
            << " enter only positive values.\n";
        }
        else
        {
            area = PI * pow(radius, 2);
            cout << "The area is " << area << endl;
        }
        break;
        case RECTANGLE_CHOICE:
        cout << "Enter the rectangle's length: ";
        cin  >> length;
        cout << "Enter the rectangle's width: ";
        cin  >> width;
        if (width > 0 && length > 0)
        {
            area = length * width;
            cout << "The area is " << area << endl;
        }
        else
        {
            cout << "Run the program again and"
            << " enter only positive values.\n";
        }
        break;
        case TRIANGLE_CHOICE:
        cout << "Enter the length of the base: ";
        cin  >> base;
        cout << "Enter the triangle's height: ";
        cin  >> height;
        if (base > 0 && height > 0)
        {
            area = (base * height) / 2;
            cout << "The area is " << area << endl;
        }
        else
        {
            cout << "Run the program again and"
            << " enter only positive values.\n";
        }
        break;
        case QUIT_CHOICE:
        cout << "Program ending." << endl;
        break;
        default:
        cout << "The valid choices are 1 through 4.\n"
        "Run the program again and select one of those.";
        break;
    }
    return 0;
}
