/*
Author: Sighfy
Project: PC6_24
Description: Rock, Paper, Scissors Game
*/

#include <iostream>

using namespace std;

int getUserChoice();
int getComputerChoice();
bool determineWinner(int user, int comp);
void displayChoice(int compChoice);
void showMenu();

const int ROCK = 1, PAPER = 2, SCISSORS = 3, QUIT = 4;

int main()
{
    int userGuess, compGuess;
    srand(0);
    userGuess =  getUserChoice();
    while (userGuess != 4)
    {
        compGuess = getComputerChoice();
        displayChoice(compGuess);
        determineWinner(userGuess, compGuess);
        userGuess = getUserChoice();
    }
    return 0;
}

int getUserChoice()
{
    int choice;
    showMenu();
    cin >> choice;
    while (choice < ROCK || choice > QUIT)
    {
        cout << "Invalid selection.\n"
            << "Enter 1, 2, 3, or 4: ";
        cin >> choice;
    }
    string select = "";
    if (choice == 1)
    {
        select = "Rock";
    }
    else if (choice == 2)
    {
        select = "Paper";
    }
    else if (choice == 3)
    {
        select = "Scissors";
    }
    if (choice < 4)
    {
        cout << "You selected: " << select << endl;
    }
    return choice;
}

int getComputerChoice()
{
    return rand() % 3 + 1; //Seed the random number generator with the value 0.
}

bool determineWinner (int user, int comp)
{
    bool winner = true;
    
    if (user != comp)
    {
        winner = true;
        //winning games
        if ((user == SCISSORS) && (comp == PAPER))
        {
            cout << "YOU win! Scissors cut paper." << endl << endl;
        }
        else if ((user == PAPER) && (comp == ROCK))
        {
        cout << "YOU win! Paper wraps rock." << endl << endl;
        }
        else if ((user == ROCK) && (comp == SCISSORS))
        {
            cout << "YOU win! Rock smashes scissors." << endl << endl;
        }
        //losing games
        else if ((comp == SCISSORS) && (user == PAPER))
        {
            cout << "Computer wins! Scissors cut paper." << endl << endl;
            winner = false;
        }
        else if ((comp == PAPER) && (user == ROCK))
        {
            cout << "Computer wins! Paper wraps rock." << endl << endl;
            winner = false;
        }
        else if ((comp == ROCK) && (user == SCISSORS))
        {
            cout << "Computer wins! Rock smashes scissors." << endl << endl;
            winner = false;
        }
        //tie games
        
    }
    else
    {
        cout << "Tie. No winner." << endl << endl;
    }
    return winner;
}

void displayChoice(int compChoice)
{
    string select;
    if (compChoice == 1)
    {
        select = "Rock";
    }
    else if (compChoice == 2)
    {
        select = "Paper";
    }
    else if (compChoice == 3)
    {
        select = "Scissors";
    }
    cout << "The computer selected: " << select << endl;
}

void showMenu()
{
    cout << "Game Menu\n"
        << "---------\n"
        << "1) Rock\n"
        << "2) Paper\n"
        << "3) Scissors\n"
        << "4) Quit\n\n"
        << "Enter your choice: ";
}
