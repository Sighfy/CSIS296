/*
Author: Sighfy
Project: PC7_103
Description: Fun and clever way to make a rock, paper, scissors + game
*/

#include <iostream>
#include <string>

using namespace std;

int getUser();

void winner(int userChoice, int compChoice, string symbols[]);

int main()
{
    int seed, userChoice, compChoice;
    
    string symbols[] = { "Batman", "Glock", "Lizard", "Paper", "Rock",
        "Scissors", "Spiderman", "Spock", "Wizard" };
    string adjectives[] = { "an excellent", "a strategic", "a good",
    "a very good", "a perceptive", "a winning", "a powerful",
        "an awesome", "a clever" };
    cout << "Enter a random seed number: ";
    cin >> seed;
    srand(seed);
    
    compChoice = rand() % 9;
    userChoice = getUser();
    string word = adjectives[rand() % 9];
    
    cout << "\n" << symbols[userChoice] << " is "
    << word << " choice" << endl;
    cout << "It's " << symbols[userChoice] << " vs. "
    << symbols[compChoice] << endl;
    winner(userChoice, compChoice, symbols);
    return 0;
}

int getUser()
{
    int choice = 0;
    cout << "\n1. Batman\n" << "2. Glock\n" << "3. Lizard\n" << "4. Paper\n"
    << "5. Rock\n" << "6. Scissors\n" << "7. Spiderman\n" << "8. Spock\n"
    << "9. Wizard\n\n";
    cout << "Enter your choice: (1 - 9): ";
    while (choice < 1 || choice > 9)
    {
        cin >> choice;
        if (choice < 1 || choice > 9)
        {
            cout << "Error choice 1-9" << endl;
        }
    }
    return choice - 1;
}

void winner(int userChoice, int compChoice, string symbols[])
{
    int win[9][9] =
    {
        {0, -1, -1, -1, -1, 1, 1, 1, 1},
        {1, 0, -1, -1, -1, 1, 1, -1, 1},
        {1, 1, 0, -1, 1, -1, -1, -1, 1},
        {1, 1, -1, 0, -1, 1, -1, -1, 1},
        {-1, -1, 1, -1, 0, -1, 1, 1, 1},
        {-1, -1, 1, 1, -1, 0, -1, 1, 1},
        {-1, 1, 1, 1, -1, -1, 0, -1, 1},
        {-1, -1, -1, -1, 1, 1, 1, 0, 1},
        {1, 1, 1, 1, -1, -1, -1, -1, 0}
    };
    string verbs[9][9] =
    {
        {"tie", "", "", "", "", "explodes", "dismantles", "scares", "hangs"},
        {"kills", "tie", "", "", "", "breaks", "dents", "", "shoots"},
        {"confuses", "is too small for", "tie",
            "eats", "", "", "", "poisons", ""},
        {"delays", "jams", "", "tie", "",
            "covers", "", "", "disproves"},
        {"", "", "crushes", "", "tie", "", "crushes",
            "knocks out", "interrupts"},
        {"", "", "decapitate", "cuts", "", "tie", "", "cut", "cut"},
        {"", "disarms", "defeats", "rips", "", "", "tie", "", "annoys"},
        {"", "", "", "", "vaporizes", "smashes", "befuddles", "tie", "zaps"},
        {"stuns", "melts", "transforms", "burns", "", "", "", "", "tie"}
    };
    
    if (win[userChoice][compChoice] == 0)
    {
        cout << symbols[userChoice] << " " << verbs[userChoice][compChoice]
        << " " << symbols[compChoice] << endl;
        cout << "\nits a tie!" << endl;
    }
    else if (win[userChoice][compChoice] == 1)
    {
        cout << symbols[userChoice] << " " << verbs[userChoice][compChoice]
        << " " << symbols[compChoice] << endl;
        cout << "\nPlayer wins!" << endl;
    }
    else
    {
        cout << symbols[compChoice] << " " << verbs[compChoice][userChoice]
        << " " << symbols[userChoice] << endl;
        cout << "\nComputer wins this one.\n" << endl;
    }
}
