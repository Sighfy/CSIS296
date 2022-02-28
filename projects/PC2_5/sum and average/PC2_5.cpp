/*
  Author: Sighfy
  Project: PC2_5
  Description: program to find the sum and average
  of 5 variables
*/

#include <iostream>

using namespace std;

int main()
{
    double n1, n2, n3, n4, n5, sum, average;
    n1 = 28;
    n2 = 32;
    n3 = 37;
    n4 = 24;
    n5 = 33;
    
    sum = n1 + n2 + n3 + n4 + n5;
    
    average = sum / 5;
    
    cout << "Sum: " << sum << "," << " Average: "
    << average << endl;
    
    return 0;
}

/*
 Sum: 154, Average: 30.8
 Program ended with exit code: 0
*/
