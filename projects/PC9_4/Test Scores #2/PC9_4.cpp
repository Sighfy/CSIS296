/*
Author: Sighfy
Project: PC9_4
Description: Test Scores #2
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void sortScoresWithNames(double *scores, string *names, int size);
double getAverageScores(double *scores, int size);
void printScoresWithName(double *scores, string *name, int size);

int main()
{
    string *names;
    double *scores;
    int size;
    double avgScore = 0;
    cout << "How many test scores will you enter? ";
    cin >> size;
    cout << endl;
    // dynamically creating names and scores array
    names = new string[size];
    scores = new double[size];
    // inputting names and scores one by one
    for (int i = 0; i < size; i++)
    {
        cout << "Enter student " << (i+1) << "'s last name: ";
        cin >> ws >> (*(names + i));
        cout << "Enter that student's test score: ";
        cin >> (*(scores+i));
        cout << endl;
    }
    sortScoresWithNames(scores, names, size);
    cout << "The test scores in ascending order, and their average, are:\n\n";
    printScoresWithName(scores, names, size);
    cout << endl;
    avgScore = getAverageScores(scores, size);
    cout << fixed << showpoint << setprecision(2) << endl;
    cout << "Average score: " << static_cast<double>(avgScore) << endl;
    // clearing the memory
    delete [] scores;
    delete [] names;
}
// function to sort scores and parallely sorting the names array
void sortScoresWithNames(double *scores, string *names, int size)
{
    int i, j;
    for (i = 0; i < size; i++)
    {
        for (j = 1; j < size-i; j++)
        {
            if ( *(scores +(j-1)) > *(scores+j) )
            {
                int temp;
                temp = *(scores +(j-1));
                *(scores +(j-1)) = *(scores+j);
                *(scores+j) = temp;
                
                string temp_s = *(names +(j-1));
                *(names +(j-1)) = *(names+j);
                *(names+j) = temp_s;
            }
        }
    }
}
// function to return the average score
double getAverageScores(double *scores, int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(scores+i);
    }
    return (sum / (double)size);
}
// function to print scores and names of each student
void printScoresWithName(double *scores, string *names, int size)
{
    cout << "Name\t\tScore" << endl;
    cout << "----------------------------------------\n\n";
    
    for (int i = 0; i < size; i++)
    {
        cout << fixed << showpoint << setprecision(2);
        cout << names[i] << "\t\t" <<
        static_cast<double>(scores[i]) << endl;
    }
}
