/*
Author: Sighfy
Project: PC9_10
Description: Reverse Array
*/

#include <iostream>

using namespace std;

int *reverse(int array[], int size)
{
    int i;
    int *copy;
    copy = new int[size];
    for (i = 0; i < size; i++)
    {
        copy[i] = array[size - i - 1];
    }
    
    return copy;
}

void display(int array[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    const int SIZE = 10;
    int size = 10,
    array[SIZE] =
    {
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10
        
    };
    
    cout << "The contents of the original array are:\n";
    display(array, size);
    int *reversedArray;
    reversedArray = reverse(array, size);
    cout << "The contents of the copy are:\n";
    display(reversedArray, size);

    delete [] reversedArray;
    return 0;
}
