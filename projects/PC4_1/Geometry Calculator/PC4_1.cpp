/*
 Author: Sighfy
 Project: PC4_1
 Description: Geometry Calculator
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    double num1, num2;
    string output;

    cout << "Enter the 1st number: ";
    cin >> num1;
    cout << "Enter the 2nd number: ";
    cin >> num2;
  
    string smaller = " is smaller than ";
    string larger = " is larger than ";
    
    output = (num1 < num2 ? smaller : larger );
    
    cout << num1 << output << num2 << "." << endl;
    
    return 0;
}
