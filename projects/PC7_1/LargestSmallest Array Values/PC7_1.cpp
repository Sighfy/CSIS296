/*
Author: Sighfy
Project: PC7_1
Description: Largest/Smallest Array Values
*/

#include <iostream>

using namespace std;

int main()
{
    int const SIZE = 10;
    int array[SIZE];
    int max = -100000, min = 100000;
    
    cout << "\nThis program will ask you to "
    << "\nenter ten values, then it will"
    << "\ndetermine the largest and smallest"
    << "\nof the values you entered.";
    
    for (int i = 0; i < SIZE; ++i)
    {
        cout << "\nEnter an integer value: ";
        cin >> array[i];
        
        if (array[i] > max)
        {
            max = array[i];
        }
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    cout << "\nThe largest value entered is " << max << endl;;
    cout << "The smallest value entered is " << min << endl;
    return 0;
}
