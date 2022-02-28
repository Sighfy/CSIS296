/*
 Author: Sighfy
 Project: PC4_16
 Description: Running the Race
*/

#include <iostream>
#include <string>


using namespace std;

int main()
{
    string runner1, runner2, runner3;
    double runTime1, runTime2, runTime3;
    
    cout << "Enter the names of three runners and their finishing times.\n"
    << "I will tell you who came in first, second, and third.\n";
    
    cout << "Name of Runner 1: ";
    getline(cin, runner1);
    cout << "Runner 1's finishing time: ";
    cin >> runTime1;
    cout << "Name of Runner 2: ";
    cin.ignore();
    getline(cin, runner2);
    cout << "Runner 2's finishing time: ";
    cin >> runTime2;
    cout << "Name of Runner 3: ";
    cin.ignore();
    getline(cin, runner3);
    cout << "Runner 3's finishing time: ";
    cin >> runTime3;
    
    if (runTime1 < 0 && runTime2 < 0 && runTime3 < 0)
    {
        cout << "The run time cannot be less than 0";
    }
    else
    {
       if (runTime1 < runTime2 && runTime1 < runTime3)
       {
           if (runTime2 < runTime3)
           {
               cout << runner1 << " came in 1st place.\n";
                cout << runner2 << " came in 2nd place.\n";
                cout << runner3 << " came in 3rd place.\n";
           }
           else
           {
               cout << runner1 << " came in 1st place.\n";
                cout << runner3 << " came in 2nd place.\n";
                cout << runner2 << " came in 3rd place.\n";
           }
       }
        else if (runTime2 < runTime1 && runTime2 < runTime3)
        {
            if (runTime1 < runTime3)
            {
                cout << runner2 << " came in 1st place.\n";
                cout << runner1 << " came in 2nd place.\n";
                cout << runner3 << " came in 3rd place.\n";
            }
            else
            {
                cout << runner2 << " came in 1st place.\n";
                cout << runner3 << " came in 2nd place.\n";
                cout << runner1 << " came in 3rd place.\n";
            }
        }
        else
        {
            if (runTime1 < runTime2)
            {
                cout << runner3 << " came in 1st place.\n";
                cout << runner1 << " came in 2nd place.\n";
                cout << runner2 << " came in 3rd place.\n";
            }
            else
            {
                cout << runner3 << " came in 1st place.\n";
                cout << runner2 << " came in 2nd place.\n";
                cout << runner1 << " came in 3rd place.\n";
            }
        }
    }
    return 0;
}

/*
 Enter the names of three runners and their finishing times.
 I will tell you who came in first, second, and third.
 Name of Runner 1: Paula Radcliffe
 Runner 1's finishing time: 293
 Name of Runner 2: Usain Bolt
 Runner 2's finishing time: 292
 Name of Runner 3: Joan Benoit Samuelson
 Runner 3's finishing time: 302
 Usain Bolt came in 1st place.
 Paula Radcliffe came in 2nd place.
 Joan Benoit Samuelson came in 3rd place.
 Program ended with exit code: 0
*/
