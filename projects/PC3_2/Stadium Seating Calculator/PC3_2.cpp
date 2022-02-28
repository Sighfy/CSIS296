/*
 Author: Sighfy
 Project: PC3_2
 Description: Stadium Seating Calculator
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double CLASS_A_PRICE = 15.00;
    const double CLASS_B_PRICE = 12.00;
    const double CLASS_C_PRICE = 9.00;
    
    int seatSoldA, seatSoldB, seatSoldC;
    
    double classATotal, classBTotal, classCTotal, totalIncome;
    
    cout << "Enter the number of Class A tickets sold: ";
    cin >> seatSoldA;
    
    cout << "Enter the number of Class B tickets sold: ";
    cin >> seatSoldB;
    
    cout << "Enter the number of Class C tickets sold: ";
    cin >> seatSoldC;
    
    classATotal = seatSoldA * CLASS_A_PRICE;
    classBTotal = seatSoldB * CLASS_B_PRICE;
    classCTotal = seatSoldC * CLASS_C_PRICE;
    
    totalIncome = classATotal + classBTotal + classCTotal;
    
    cout << "Total income from sale of tickets is $"
    << setprecision(2) << fixed << totalIncome << endl;
    
    return 0;
}

/*
 Enter the number of Class A tickets sold: 1
 Enter the number of Class B tickets sold: 2
 Enter the number of Class C tickets sold: 3
 Total income from sale of tickets is $66.00
 Program ended with exit code: 0
*/
