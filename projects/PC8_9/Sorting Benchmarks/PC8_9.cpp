/*
Author: Sighfy
Project: PC8_9
description: Sorting Benchmarks
*/

#include <iostream>
#include <string>

using namespace std;

int bubbleSort(long accounts1[], int SIZE)
{
    int count = 0;
    for (int i = 0; i < SIZE - 1; i++)
    {
        for (int j = 0; j < SIZE - i - 1; j++)
        {
            if (accounts1[j] > accounts1[j+1])
            {
                swap(accounts1[j], accounts1[j+1]);
                count++;
            }
        }
    }
    return count;
}

int selectionSort(long accounts2[], int SIZE)
{
    long startScan, minIndex = 0, minValue = 0;
    int exchanges = 0;
    
    for (startScan = 0; startScan < (SIZE - 1); startScan++)
    {
        minIndex = startScan;
        minValue = accounts2[startScan];
        
        for (long index = startScan + 1; index < SIZE; index++)
        {
            if (accounts2[index] < minValue)
            {
                minValue = accounts2[index];
                minIndex = index;
            }
        }
        exchanges++;
    }
    accounts2[minIndex] = accounts2[startScan];
    accounts2[startScan] = minValue;
    
    return exchanges;
}

int main()
{
    const int SIZE = 18;
    
    long accounts1[SIZE] =
    {
        5658845, 4520125, 7895122,
        8777541, 8451277, 1302850,
        8080152, 4562555, 5552012,
        5050552, 7825877, 1250255,
        1005231, 6545231, 3852085,
        7576651, 7881200, 4581002
        
    };
    
    long accounts2[SIZE] =
    {
        5658845, 4520125, 7895122,
        8777541, 8451277, 1302850,
        8080152, 4562555, 5552012,
        5050552, 7825877, 1250255,
        1005231, 6545231, 3852085,
        7576651, 7881200, 4581002
        
    };
    
    long bubbleExchange, selectExchange;
    
    bubbleExchange = bubbleSort(accounts1, SIZE);
    selectExchange = selectionSort(accounts2, SIZE);
    
    cout << bubbleExchange << " exchanges were made by Bubble Sort.\n\n";
    cout << selectExchange << " exchanges were made by Selection Sort.\n";
    
    return 0;
}
