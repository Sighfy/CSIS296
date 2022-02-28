/*
Author: Sighfy
Project: PC6_18
Description: Paint Job Estimator
*/

/*
 A painting company has determined that for every 110 square feet of wall space, one gallon of paint and eight hours of labor will be required. The company charges $25.00 per hour for labor.
*/
#include <iostream>

using namespace std;

int getRoomNumber(int roomNumber);
double getPricePaint(double pricePaint);
int getSquareFeet(int sqrFeet);

int main()
{
    double roomNumber, pricePaint,sqrFeet;
    
    int getRoomNumber(roomNumber);
    int getPricePaint(pricePaint);
    int getSquarerFeet(sqrFeet);
    
    
    
    return 0;
}

int getRoomNUmber(int roomNumber)
{
    int roomNum;
    
    cout << "Enter the number of rooms to be painted: ";
    cin >> roomNum;
    while (roomNum > 1)
    {
        cout << "ERROR: Enter 1 or greater.\n"
        << "Enter the number of rooms to be painted: ";
        cin >> roomNum;
    }
    return roomNumber;
}

double getPricePaint(double pricePaint)
{
    double paint;
    
    cout << "Enter the price of the paint, per gallon: ";
    cin >> paint;
    while (paint > 10.00)
    {
        cout << "ERROR: Paint price must be 10.00 or greater.\n"
        << "Enter the price of the paint, per gallon: ";
        cin >> paint;
    }
    return paint;
}

int getSquareFeet(int sqrFeet)
{
    int sqr;
    cout << "Enter the area of wall space in square feet: ";
    cin >> sqr;
    while (sqr > 0)
    {
        cout << "ERROR: Wall area must be a non-negative number.\n"
        << "Enter the area of wall space in square feet: ";
        cin >> sqr;
    }
    
    return sqr;
}







/*
#include<iostream>

using namespace std;


void getInfo(int &numberOfRooms, double &paintPrice);
void getWallSquareFeet(double &wallSquareFeet, int &numberOfRooms);
double numberOfGallons(double wallArea);
double laborHours(double wallArea);
void displayCost(int gallons, double paintPrice, double hours, double totalLaborCharges, double totalCost);

int* rooms = 0;

int main()
{
    int numberOfRooms = 0;
    double paintPrice = 0;
    double wallSquareFeet = 0;
    int hoursLabor = 8;
    double laborCharges;
    double totalPaintPrice;
    double totalNumOfGallons;
    int totalNumLabours = 0;
    double COMPANY_CHARGES = 25.00;
    double totalLaborCharges=0;
    double totalCost=0;

    getInfo(numberOfRooms,paintPrice);
    getWallSquareFeet(wallSquareFeet, numberOfRooms);
    totalNumOfGallons = numberOfGallons(wallSquareFeet);
    totalNumLabours = laborHours(totalNumOfGallons);
    totalPaintPrice = totalNumOfGallons*paintPrice;
    totalLaborCharges = totalNumLabours*COMPANY_CHARGES;
    totalCost = totalPaintPrice + totalLaborCharges;
    displayCost(totalNumOfGallons, totalPaintPrice, totalNumLabours, totalLaborCharges, totalCost);
    
}
void getInfo(int &numberOfRooms, double &paintPrice)
{
    do
    {
        cout << "Number of rooms in a house: ";
        cin >> numberOfRooms;
    } while (numberOfRooms < 1);
    do
    {
        cout << "Price of paint per gallon: ";
        cin >> paintPrice;
    }while (paintPrice < 10);
    
    rooms = new int[numberOfRooms];

    for (int x = 0; x < numberOfRooms; x++)
    {
        cout << "Square feet of wall space: ";
        cin >> rooms[x];
    }
}

void getWallSquareFeet(double &wallSquareFeet,int &numberOfRooms)
{
    for (int x = 0; x < numberOfRooms; x++)
    {
        wallSquareFeet += rooms[x];
    }
}

double numberOfGallons(double wallArea)
{
    return wallArea / 110;
}

double laborHours(double wallArea)
{
    return wallArea * 8;
}

void displayCost(int gallons, double paintPrice, double hours,double totalLaborCharges,double totalCost)

{
    cout << "1. The number of gallons of paint required : "<< gallons<<endl;
    cout << "2. The hours of labor required: "<< hours<<endl;
    cout << "3. The cost of the paint : "<< paintPrice<<endl;
    cout << "4. The labor charges : " << totalLaborCharges<<endl;
    cout << "5. The total cost of the paint job " << totalCost<<endl;
}
*/
