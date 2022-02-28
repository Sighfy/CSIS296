/*
Author: Sighfy
Project: PC9_5
Description: Pointer Rewrite
*/

#include <iostream>

using namespace std;

int doSomething(int *px, int *py)
{
    int temp;
    temp = *px;
    *px = *py * 10;
    *py = temp * 10;
    return *px + *py;
}

int main()
{
    int x, y, *px, *py;
    px = &x;
    py = &y;
    
    cout << "Enter 2 integers (x and y): ";
    cin >> x >> y;
    
    cout << "returns: " << doSomething(px, py)
        << ", x: " << (*px) << ", y: " << (*py) << endl;
    
    return 0;
}
