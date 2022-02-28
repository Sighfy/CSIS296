/*
Author: Sighfy
Project: PC6_7
Decscription: Celsius Temperature Table
*/

#include <iostream>
#include <iomanip>

using namespace std;

double celsius(int);

int main()
{
    double cel;
    cout << "Fahrenheit   Celsius\n"
    << "----------------------\n";
    for (cel=0; cel <= 20; cel++)
    {
    cout << fixed << setprecision(1) << cel << setw(15) << celsius(cel) << endl;
    }
    return 0;
}

double celsius(int F)
{
    return 5./9.*(F-32.);
}
