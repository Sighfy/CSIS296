/*
Author: Sighfy
Project: PC8_8
description: Search Benchmarks
*/

#include <iostream>

using namespace std;

int binarySearch(int tests[], int ARRAY_SIZE, int value)
{
    int low = 0, high = ARRAY_SIZE - 1, mid;
    int result = 0;
    bool found = false;
    
    while (found == false && low <= high)
    {
        result++;
        
        mid = (low + high) / 2;
        
        if (tests[mid] == value)
        {
            found = true;
        }
        else if (tests[mid] < value)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return result;
}


int linearSearch(int tests[], int ARRAY_SIZE, int value)
{
    int i, ind = -1;
    
    for (i = 0; i < ARRAY_SIZE; i++)
    {
        if (tests[i] == value)
        {
            if (ind == -1)
            {
                ind = i;
            }
        }
    }
    return ind + 1;
}

int main()
{
    const int ARRAY_SIZE = 20;
    
    int tests[ARRAY_SIZE] =
    {
        101, 142, 147, 189, 199, 207, 222,
        234, 289, 296, 310, 319, 388, 394,
        417, 429, 447, 521, 536, 600
    };
    
    int value, binCompare, linCompare;
    
    cout << "Enter a search value from the array: ";
    cin >> value;
    
    binCompare = binarySearch(tests, ARRAY_SIZE, value);
    
    linCompare = linearSearch(tests, ARRAY_SIZE, value);
    
    cout << "The linear search made " << linCompare << " comparisons." << endl;
    cout << "The binary search made " << binCompare << " comparisons." << endl;
    
    return 0;
}
