/*
 Author: Sighfy
 Project: PC2_17
 Description: Program to calculate stock commission
*/

#include <iostream>

using namespace std;

int main()
{
    int stock, total;
    double comm;
    
    stock = 750 * 35;
    comm = stock * 0.02;
    total = stock + comm;
    
    cout << "Stock: $" << stock << endl
    << "Commission: $" << comm << endl
    << "Total: $" << total << endl;
    
    return 0;
}

/*
 Stock: $26250
 Commission: $525
 Total: $26775
 Program ended with exit code: 0
*/
