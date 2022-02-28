/*
Author: Sighfy
Project: PC6_102
Description: Paint Job Estimator
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void getInfo(double &paintPrice, int &totalSqrFt);
double numberOfGallons(double wallArea);
double laborHours(double gallons);
void displayCost(double gallons, double paintPrice,
                 double hours, double totalLaborCharges, double totalCost);

int main()
{
    double paintPrice = 0;
    double totalPaintPrice;
    double totalNumOfGallons;
    double totalNumLabours = 0;
    int totalSqrFt = 0;
    double COMPANY_CHARGES = 25.00;
    double totalLaborCharges=0;
    double totalCost=0;

    getInfo(paintPrice, totalSqrFt);
    totalNumOfGallons = numberOfGallons(totalSqrFt);
    totalNumLabours = laborHours(totalNumOfGallons);
    totalPaintPrice = ceil(totalNumOfGallons) * paintPrice;
    totalLaborCharges = totalNumLabours * COMPANY_CHARGES;
    totalCost = totalPaintPrice + totalLaborCharges;
    displayCost(totalNumOfGallons, paintPrice,
                totalNumLabours, totalLaborCharges, totalCost);
    
}
void getInfo(double &paintPrice, int &totalSqrFt)
{
    int numberOfRooms = 0;
    int roomSqrFt = 0;
    do
    {
        cout << "Enter the number of rooms to be painted: ";
        cin >> numberOfRooms;
        while (numberOfRooms < 1)
        {
            cout << "ERROR: Enter 1 or greater.\n";
            cout << "Enter the number of rooms to be painted: ";
            cin >> numberOfRooms;
        }
    } while (numberOfRooms < 1);
    do
    {
        cout << "Enter the price of the paint, per gallon: ";
        cin >> paintPrice;
        while (paintPrice < 10)
        {
            cout << "ERROR: Paint price must be 10.00 or greater.\n";
            cout << "Enter the price of the paint, per gallon: ";
            cin >> paintPrice;
        }
    } while (paintPrice < 10);

    for (int x = 0; x < numberOfRooms; x++)
    {
        cout << "Room " << (x + 1) << ": ";
        cout << "Enter the area of wall space in square feet: ";
        cin >> roomSqrFt;
        while (roomSqrFt < 0)
        {
            cout << "ERROR: Wall area must be a non-negative number.\n";
            cout << "Enter the area of wall space in square feet: ";
            cin >> roomSqrFt;
        }
        totalSqrFt += roomSqrFt;
    }
}

double numberOfGallons(double wallArea)
{
    return wallArea / 110.0;
}

double laborHours(double gallons)
{
    return gallons * 8;
}

void displayCost(double gallons, double paintPrice,
                 double hours, double totalLaborCharges, double totalCost)
{
    cout << "\nESTIMATED CHARGES\n";
    cout << "------------------\n";
    cout << "Gallons of paint: " << ceil(gallons) << endl;
    cout << "Price per gallon: $" << fixed <<setprecision(2)
    << paintPrice << endl;
    cout << "Paint cost: $" << paintPrice * ceil(gallons) << endl;
    cout << "Hours of labor: " << hours << endl;
    cout << "Total charges: $" << totalCost << endl;
}
