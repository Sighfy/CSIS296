/*
 Author: Sighfy
 Project: PC3_22
 Description: Angle Calculator
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double angle, sine, cosine, tangent;
    
    cout << "Enter an angle in radians: ";
    cin >> angle;
    
    sine = sin(angle);
    cosine = cos(angle);
    tangent = tan(angle);
    
    cout << setprecision(4) << fixed
    << "Sine: " << sine << '\n'
    << "Cosine: " << cosine << '\n'
    << "Tangent: " << tangent << endl;
    
    return 0;
}

/*
 Enter an angle in radians: 2.0
 Sine: 0.9093
 Cosine: -0.4161
 Tangent: -2.1850
 Program ended with exit code: 0
*/
