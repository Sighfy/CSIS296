/*
Author: Sighfy
Project: PC6_100
Description: Math Tutor IV
*/

#include <iostream>
#include <iomanip>

using namespace std;

int add(int num1, int num2);
int subtract(int num1, int num2);
float multiply(int num1, int num2);
// int getRandNum(int num2); // not used
float divide(float num1, float num2);

int main()
{
    long int seed = 0;
    float num1, num2;
    int correct = 0, total = 0;
    float res, resUser;
    char ch, ch1;
    cout << "Enter a seed value (0 - 2123456789): ";
    cin >> seed;
    srand(seed);
    cout << "Welcome to Math Tutor.\n";
    do
    {
        cout << "A. Addition\n"
            << "B. Subtraction\n"
            << "C. Addition / Subtraction\n"
            << "D. Multiplication\n"
            << "E. Division\n"
            << "F. Multiplication / Division\n"
            << "G. Random\n\n"
            << "Please make a selection: ";
        cin >> ch;
    } while (ch != 'A' && ch != 'B' && ch != 'C' &&
        ch != 'D' && ch != 'E' &&
        ch != 'F' && ch != 'G');
    do
    {
        num1 = -999 + rand() % 1999;
        num2 = -999 + rand() % 1999;
        cout << "\n" << num1;
        switch (ch)
        {
            case 'A':
            {
                cout << "\n+ ";
                res = add(int(num1), int(num2));
                break;
            }
            case 'B':
            {
                cout << "\n- ";
                res = subtract(num1, num2);
                break;
            }
            case 'C':
            {
                if (rand() % 2)
                {
                    cout << "\n- ";
                    res = subtract(num1, num2);
                }
                else
                {
                    cout << "\n+ ";
                    res = add(num1, num2);
                }
                break;
            }
            case 'D':
            {
                cout << "\n* ";
                res = multiply(num1, num2);
                break;
            }
            case 'E':
            {
                while (num2 == 0);
                cout << "\n/ ";
                res = divide(num1, num2);
                break;
            }
            case 'F':
            {
                if (rand() % 2)
                {
                    cout << "\n/ ";
                    res = divide(num1, num2);
                }
                else
                {
                    while (num2 == 0);
                    cout << "\n* ";
                    res = multiply(num1, num2);
                }
                break;
            }
            case 'G':
            {
                switch (rand() % 4)
                {
                    case 0:
                    {
                        cout << "\n+ ";
                        res = add(num1, num2);
                        break;
                    }
                    case 1:
                    {
                        cout << "\n- ";
                        res = subtract(num1, num2);
                        break;
                    }
                    case 2:
                    {
                        cout << "\n* ";
                        res = multiply(num1, num2);
                        break;
                    }
                    case 3:
                    {
                        while (num2 == 0);
                        cout << "\n/ ";
                        res = divide(num1, num2);
                        break;
                    }
                }
            }
        }
        cout << num2 << "\n__________\n";
        cin >> resUser;
        total++;
        if (res == resUser)
        {
            cout << "Congratulations! That is the correct answer.\n";
            correct++;
        }
        else
        {
            if(res-(int) res == 0)
            {
                cout << "Sorry, the correct answer is " << res << ".";
            }
            else
            {
            cout << "Sorry, the correct answer is "
            << fixed << setprecision(2) << res << ". ";
            }
        }
        do
        {
            cout << "\n\nGo Again (y/n)? ";
            cin >> ch1;
        } while (ch1 != 'y' && ch1 != 'n');
    
    } while (ch1 == 'y');
    {
        cout << "You got " << correct
            << " out of " << total
            << " problems correct.\n"
            << "Your score is "
            << fixed << setprecision(1)
            << static_cast<double>(correct) * 100 / total << "%";
    }
    return 0;
}

int add(int num1, int num2)
{
    return(num1 + num2);
}

int subtract(int num1, int num2)
{
    return(num1 - num2);
}

float multiply(int num1, int num2)
{
    return(num1 * num2);
}

float divide(float num1, float num2)
{
    return(num1 / num2);
}


/*
int getRandNum(int num2)
{
    num2 = -999 + rand() % 1999;
    return num2;
}
*/
