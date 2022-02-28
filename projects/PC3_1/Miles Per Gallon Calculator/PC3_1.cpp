/*
 Author: Sighfy
 Project: PC3_1
 Description: Miles Per Gallon Calculator
*/

#include <iostream>

using namespace std;

int main()
{
    double mpg, driven, fullTank;
    
    cout << "How many gallons of gas can the car hold? ";
    cin >> fullTank;
    cout << "How many miles can you drive on a full tank? ";
    cin >> driven;
    
    mpg = driven / fullTank;
    
    cout << "This car gets " << mpg << " miles per gallon." << endl;
    
    return 0;
}

/*
 How many gallons of gas can the car hold? 12.5
 How many miles can you drive on a full tank? 410
 This car gets 32.8 miles per gallon.
 Program ended with exit code: 0
*/
