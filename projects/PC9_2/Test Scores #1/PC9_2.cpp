/*
Author: Sighfy
Project: PC9_2
Description: Test Scores #1
*/

#include <iostream>
#include <iomanip>

using namespace std;

void arrSelectSort(double *arr, int size);
double arrAvgScore(double *arr, int size);
int main()
{
    double *TestScores,
    average;
    int numTest,
    count;
    //Get the number of test scores you wish to average and put in order
    cout << "How many test scores will you enter? ";
    cin >> numTest;
    //Dynamically allocate an array large enough to hold that many scores
    TestScores = new double[numTest];
    //Get the test scores
    for (count = 0; count < numTest; count++)
    {
        //Display score
        cout << "Enter test score " << (count + 1) << ": ";
        cin >> TestScores[count];
        // Input validation. Only numbers between 0-100
        while (TestScores[count] < 0 || TestScores[count] > 99)
        {
            cout << "You must enter a scores that non-negative" << endl;
            cout << "Please enter again: ";
            cin >> TestScores[count];
        }
    }
    arrSelectSort(TestScores, numTest);
    average = arrAvgScore(TestScores, numTest);
    cout << fixed << showpoint << setprecision(2);
    cout << "The test scores in ascending order, and their average, are:\n";
    cout << "Score\n-----\n\n";
    for (count = 0; count < numTest; count++)
    {
        cout << TestScores[count] << "\n";
    }
    cout << endl;
    cout << "Average score: " << average << endl;
    //Free dynamically allocated memory
    delete [] TestScores;
    TestScores = 0; //make TestScores point to null
    
    return 0;
}
//Ascending order selection sort
void arrSelectSort(double *arr, int size)
{
    int startScan;
    int minIndex;
    double minElem;
    for (startScan = 0; startScan < (size - 1); startScan++)
    {
        minIndex = startScan;
        minElem = arr[startScan];
        for (int index = startScan; index < size; index++)
        {
            if (arr[index] < minElem)
            {
                minElem = arr[index];
                minIndex = index;
            }
        }
        if (minIndex!=startScan)
        {
            double temp = arr[minIndex];
            arr[minIndex] = arr[startScan];
            arr[startScan] = temp;
        }
    }
}
double arrAvgScore (double *arr, int size)
{
    double total = 0, average;
    for (int count = 0; count < size; count++)
    {
        total += arr[count];
    }
    average = total / size;
    return average;
}
