/*
Author: Sighfy
Project: PC7_104
Description: Summary Sales Report
*/

#include <iostream>

using namespace std;

int main()
{
    const int EMPLOYEEID = 8;
    const int SOLDITEMS = 2;
    int total;
    
    int sales[EMPLOYEEID][SOLDITEMS] =
    {
        {101, 7}, {102, 8}, {103, 6},
        {103, 2}, {103, 4}, {104, 9},
        {105, 7}, {105, 1}
        
    };
    for (int ID = 101; ID <= 105; ID++)
    {
        total = 0;
        for (int j = 0; j < EMPLOYEEID; j++)
        {
            if (sales[j][0] == ID)
            {
                cout << "Salesman " << ID << " sold " <<
                sales[j][1] << " items\n";
                total += sales[j][1];
            }
        }
        cout << "total: " << total << endl;
    }
    
    return 0;
}
