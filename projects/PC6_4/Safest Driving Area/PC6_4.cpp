/*
Author: Sighfy
Project: PC6_4
Description: Safest Driving Area
*/

#include <iostream>

using namespace std;

int getNumAccidents(string region);
void findLowest(int north, int south, int east, int west, int central);

int main()
{
    int north, south, east, west, central;
    
    central = getNumAccidents("central");
    west = getNumAccidents("west");
    east = getNumAccidents("east");
    south = getNumAccidents("south");
    north = getNumAccidents("north");
    
    findLowest(north, south, east, west, central);

    return 0;
}

int getNumAccidents(string region)
{
    int accidents;

    do
    {
        cout << "How many accidents were reported in the "
            <<  region << " region of the city: ";
        cin  >> accidents;

        if (accidents < 0)
        {
            cout << "The number of reported accidents"
                << " must be a positive number.\n";
        }
    }
    while (accidents < 0);
    return accidents;
}

void findLowest(int north, int south, int east, int west, int central)
{
    int lowest;

    cout << "\nThe city's ";

    if (north < south   &&
       north < east    &&
       north < west    &&
       north < central)
    {
        lowest = north;
        cout << "north ";
    }
    else if (south < north   &&
            south < east    &&
            south < west    &&
            south < central)
    {
        lowest = south;
        cout << "south ";
    }
    else if (east < north   &&
            east < south   &&
            east < west    &&
            east < central)
    {
        lowest = east;
        cout << "east ";
    }
    else if (west < north   &&
            west < east    &&
            west < south   &&
            west < central)
    {
        lowest = west;
        cout << "west ";
    }
    else
    {
        lowest = central;
        cout << "central ";
    }

    cout << "region had the lowest number of reported accidents last year."
            << "\nThat region's reported number of accidents was "
            <<  lowest << ".\n\n";
}
