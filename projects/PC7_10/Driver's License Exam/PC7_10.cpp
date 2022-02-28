/*
Author: Sighfy
Project: PC7_10
Description: Driver's License Exam
*/

// Header files section
#include <iostream>
#include <string>

using namespace std;

// function prototype
int grade(char correctAnswers[], char studentAnswers[], int size);

// start main function
int main()
{
    // constant declaration
    const int MAXIMUM_QUESTIONS = 20;
    const int PASSING_GRADE = 15;

    // arrays declaration
    char correctAnswers[MAXIMUM_QUESTIONS] =
    {'A', 'D', 'B', 'B', 'C',
        'B', 'A', 'B', 'C', 'D',
        'A', 'C', 'D', 'B', 'D',
        'C', 'C', 'A', 'D', 'B'};
    char studentAnswers[MAXIMUM_QUESTIONS];

    // variables declaration
    int correctCount = 0;
    int invalidCount = 0;
    char answer;
    
    cout << "Please enter the student's answers "
    << "for each of the questions.\n"
    << "Press Enter after typing each answer.\n";
    cout << "Please enter only an A, B, C, or D "
    << "for each question.\n";

    // read the student answers for each question
    for (int i = 0; i < MAXIMUM_QUESTIONS; i++)
    {
        // prompt the user to enter the answer
        cout << "Question " << (i + 1) << ": ";
        cin >> answer;

        // verify whether the student answer is valid
        while (answer != 'A' && answer != 'B' && answer != 'C' && answer != 'D')
        {
            // count the invalid answers
            invalidCount++;

            // prompt the user to enter valid answer
            cout << "Use only an A, B, C, or D!\n";
            cin >> answer;
        }

        // store the answer in the studentAnswers array
        studentAnswers[i] = answer;
    }

    // call the grade function to get the student correct answers
    correctCount = grade(correctAnswers, studentAnswers, MAXIMUM_QUESTIONS);
    
    // verify whether the student has passed the exam
    if (correctCount >= PASSING_GRADE)
    {
        // if student has passed the exam
        cout << "\n\nThe student passed the exam.\n\n";
        cout << "Correct Answers: " << correctCount << endl;
        cout << "Incorrect Answers: "
        << (MAXIMUM_QUESTIONS - correctCount) << endl;
        cout << "Questions that were answered incorrectly: ";
        for (int i = 0; i < MAXIMUM_QUESTIONS; i++)
        {
            if (correctAnswers[i] != studentAnswers[i])
            {
                cout << i + 1 << " ";
            }
        }
        cout << endl;
    }
    else
    {
        // if student has failed the exam
        cout << "\n\nThe student failed the exam.\n\n";
        cout << "Correct Answers: " << correctCount << endl;
        cout << "Incorrect Answers: "
        << (MAXIMUM_QUESTIONS - correctCount) << endl;
        cout << "Questions that were answered incorrectly: ";
        for (int i = 0; i < MAXIMUM_QUESTIONS; i++)
        {
            if (correctAnswers[i] != studentAnswers[i])
            {
                cout << i + 1 << " ";
            }
        }
        cout << endl;
    }
    return 0;
} // end of main function


// grade function implementation
// it counts and returns the number of student correct answers
int grade(char correctAnswers[], char studentAnswers[], int size)
{
    int correctCount = 0;

    for (int i = 0; i < size; i++)
    {
        if (correctAnswers[i] == studentAnswers[i])
        {
            correctCount++;
        }
    }

    return correctCount;
    
} // end of grade function
