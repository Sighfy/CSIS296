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

const int ROCK = 1, PAPER = 2, SCISSORS = 3, LIZARD = 4, SPOCK = 5;

int main()
{
    int userGuess, compGuess, seed;
    cout << "Enter a random seed number: ";
    cin >> seed;
    srand(seed);
    userGuess =  getUserChoice();
    //comments in this module turn repetition off
    //while (userGuess != 6)
    //{
    compGuess = getComputerChoice();
    displayChoice(compGuess);
    determineWinner(userGuess, compGuess);
    //userGuess = getUserChoice();
    //}
    return 0;
}

int getUserChoice()
{
    int const MAX = 5;
    int choice;
    showMenu();
    cout << "\nEnter your choice: (1 - " << MAX << "): ";
    cin >> choice;
    while (choice < ROCK || choice > SPOCK)
    {
        cout << "Error! Select 1 - " << MAX << " only: ";
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
    else if (choice == 4)
    {
        select = "Lizard";
    }
    else if (choice == 5)
    {
        select = "Spock";
    }
    if (choice < 6)
    {
        cout << "Player choses " << select << endl;
    }
    return choice;
}

int getComputerChoice()
{
    return rand() % 5 + 1; //Seed the random number generator with the value 0.
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
            cout << "Player wins!\n";
        }
        else if ((user == PAPER) && (comp == ROCK))
        {
            cout << "Player wins!\n";
        }
        
        else if ((user == ROCK) && (comp == LIZARD))
        {
            cout << "Player wins!\n";
        }
        else if ((user == LIZARD) && (comp == SPOCK))
        {
            cout << "Player wins!\n";
        }
        else if ((user == SPOCK) && (comp == SCISSORS))
        {
            cout << "Player wins!\n";
        }
        else if ((user == SCISSORS) && (comp == LIZARD))
        {
            cout << "Player wins!\n";
        }
        else if ((user == LIZARD) && (comp == PAPER))
        {
            cout << "Player wins!\n";
        }
        else if ((user == PAPER) && (comp == SPOCK))
        {
            cout << "Player wins!\n";
        }
        else if ((user == SPOCK) && (comp == ROCK))
        {
            cout << "Player wins!\n";
        }
        else if ((user == ROCK) && (comp == SCISSORS))
        {
            cout << "Player wins!\n";
        }
        //losing games
        else if ((comp == SCISSORS) && (user == PAPER))
        {
            cout << "Computer wins.\n";
            winner = false;
        }
        else if ((comp == PAPER) && (user == ROCK))
        {
            cout << "Computer wins.\n";
            winner = false;
        }
        
        else if ((comp == ROCK) && (user == LIZARD))
        {
            cout << "Computer wins.\n";
            winner = false;
        }
        else if ((comp == LIZARD) && (user == SPOCK))
        {
            cout << "Computer wins.\n";
            winner = false;
        }
        else if ((comp == SPOCK) && (user == SCISSORS))
        {
            cout << "Computer wins.\n";
            winner = false;
        }
        else if ((comp == SCISSORS) && (user == LIZARD))
        {
            cout << "Computer wins.\n";
            winner = false;
        }
        else if ((comp == LIZARD) && (user == PAPER))
        {
            cout << "Computer wins.\n";
            winner = false;
        }
        else if ((comp == PAPER) && (user == SPOCK))
        {
            cout << "Computer wins.\n";
            winner = false;
        }
        else if ((comp == SPOCK) && (user == ROCK))
        {
            cout << "Computer wins.\n";
            winner = false;
        }
        else if ((comp == ROCK) && (user == SCISSORS))
        {
            cout << "Computer wins.\n";
            winner = false;
        }
        //tie games
        
    }
    else
    {
        cout << "Tie game, go again\n" << endl << endl;
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
    else if (compChoice == 4)
    {
        select = "Lizard";
    }
    else if (compChoice == 5)
    {
        select = "Spock";
    }
    cout << "Computer choses " << select << endl;
}

void showMenu()
{
    cout << "Rock (1), Paper (2), Scissors (3), Lizard (4), Spock (5)";
}
