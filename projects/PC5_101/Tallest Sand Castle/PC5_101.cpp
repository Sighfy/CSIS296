/*
 Author: Sighfy
 Project: PC5_101
 description: Tallest Sand Castle
*/

#include <iostream>

using namespace std;

int main()
{
    string a[10];
    const int MIN_SIZE = 0, MAX_SIZE = 11;
    int f[10], i[10];
    int j = 0;
    cout << "Builder name: ";
    getline(cin, a[j]);
    while (a[j] != "")
    {
        cout << "feet: ";
        cin >> f[j];
        while (f[j] < MIN_SIZE)
        {
            cout << "Error! Enter a positive integer: ";
            cin >> f[j];
        }
        cout << "inches: ";
        cin >> i[j];
        while (i[j] > MAX_SIZE || i[j] < MIN_SIZE)
        {
            cout << "Error! Enter a positive integer 11 or less: ";
            cin >> i[j];
        }
        j++;
        cin.ignore();
        cout << "Builder name: ";
        getline(cin, a[j]);
    }
    int maxf = 0, index = 0;
    for ( int k = 0; k < j; k++)
    {
        if (f[k] > maxf)
        {
            maxf = f[k];
            index = k;
        }
    }
    cout << a[index] << " built the tallest sand castle @ "
    << f[index] << "\' " << i[index] << "\"." << endl;
}
