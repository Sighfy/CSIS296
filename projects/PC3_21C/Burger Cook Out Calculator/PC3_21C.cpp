/*
 Author: Sighfy
 Project: PC3_21C
 Description: Burger Cook Out Calculator
*/

#include <iostream>

using namespace std;

int main()
{
    int people, patties, buns;
    double leftPatties, leftBuns;
    double cookPatties, cookBuns;
    
    cout << "How many people attending?: ";
    cin >> people;
    cout << "How many patties per package?: ";
    cin >> patties;
    cout << "How many buns per package?: ";
    cin >> buns;
    
    leftPatties = people / patties;
    if (people % patties > 0)
    {
        leftPatties++;
    }
    leftBuns = people / buns;
    if (people % buns > 0)
    {
        leftBuns++;
    }
    cookPatties = patties * leftPatties - people;
    cookBuns = buns * leftBuns - people;
    
    cout << people << " people will require " << leftPatties
    << "  packages of patties, and " << leftBuns << " packages of buns." << endl;
    cout << "The cook will take home " << cookPatties
    << " patties, and " << cookBuns << " buns." << endl;
}

/*
 How many people attending?: 13
 How many patties per package?: 14
 How many buns per package?: 12
 13 people will require 1  packages of patties, and 2 packages of buns.
 The cook will take home 1 patties, and 11 buns.
 Program ended with exit code: 0
*/
