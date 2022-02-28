/*
Author: Sighfy
Project: PC5_15
Description: Membership Fees Increase
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double RATE = 0.04, CURRENT_CHARGE = 2500.0;
    int year;
    double yearRate, increase = 0.0;
    
    cout << "Year    Increase    Fee\n"
         << "============================\n";

    for (year = 1; year <= 6; year++)
    {
        yearRate = CURRENT_CHARGE * (1 + year * RATE);
        increase = (RATE * 100 * year);
        cout << year << setw(8) << fixed << setprecision(0)
        << increase << "%" << setw(11) << "$" << setprecision(2)
        << yearRate << endl;
    }
    cout << endl;
    return 0;
}
