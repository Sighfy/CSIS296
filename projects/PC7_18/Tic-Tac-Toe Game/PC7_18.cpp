/*
Author: Sighfy
Project: PC7_18
Description: Tic-Tac-Toe Game
*/

#include <iostream>

using namespace std;

void printBoard(char board[3][3])
{
    cout << "\t   Columns \n";
    cout << "\t   1 2 3\n";
    for (int i=0; i<3; i++)
    {
        cout << "Row " << i + 1 << ": ";
        for (int j=0; j<3; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

void pickSpot(char board[3][3], int x, int y, char c)
{
    while (board[x - 1][y - 1] != '*')
    {
        cout << "That location is not available."
        << " Select another location.\n";
        cout << "Row: ";
        cin >> x;
        
        cout << "Column: ";
        cin >> y;
        
    }
    board[x - 1][y - 1] = c;
}

bool checkGameStatus(char board[3][3])
{
    bool quit = false;
    // check rows for X player
    if (board[0][0] == board[0][1] && board[0][1]
        == board[0][2] && board[0][2] == 'X')
    {
        printBoard(board);
        cout << "Player 1 (X) WINS!!!!!\n\n";
        quit = true;
    }
    if (board[1][0] == board[1][1] && board[1][1]
        == board[1][2] && board[1][2] == 'X')
    {
        printBoard(board);
        cout << "Player 1 (X) WINS!!!!!\n\n";
        quit = true;
    }
    if (board[2][0] == board[2][1] && board[2][1]
        == board[2][2] && board[2][2] == 'X')
    {
        printBoard(board);
        cout << "Player 1 (X) WINS!!!!!\n\n";
        quit = true;
    }
    // check collumns for X player
    if (board[0][0] == board[1][0] && board[1][0]
        == board[2][0] && board[2][0] == 'X')
    {
        printBoard(board);
        cout << "Player 1 (X) WINS!!!!!\n\n";
        quit = true;
    }
    if (board[0][1] == board[1][1] && board[1][1]
        == board[2][1] && board[2][1] == 'X')
    {
        printBoard(board);
        cout << "Player 1 (X) WINS!!!!!\n\n";
        quit = true;
    }
    if (board[0][2] == board[1][2] && board[1][2]
        == board[2][2] && board[2][2] == 'X')
    {
        printBoard(board);
        cout << "Player 1 (X) WINS!!!!!\n\n";
        quit = true;
    }
    // checks collumns for O player
    if (board[0][0] == board[1][0] && board[1][0]
        == board[2][0] && board[2][0] == 'O')
    {
        //printBoard(board);
        cout << "Player 2 (O) WINS!!!!!\n\n";
        quit = true;
    }
    if (board[0][1] == board[1][1] && board[1][1]
        == board[2][1] && board[2][1] == 'O')
    {
        //printBoard(board);
        cout << "Player 2 (O) WINS!!!!!\n\n";
        quit = true;
    }
    if (board[0][2] == board[1][2] && board[1][2]
        == board[2][2] && board[2][2] == 'O')
    {
        //printBoard(board);
        cout << "Player 2 (O) WINS!!!!!\n\n";
        quit = true;
    }
    // check rows for O player
    if (board[0][0] == board[0][1] && board[0][1]
        == board[0][2] && board[0][2] == 'O')
    {
        //printBoard(board);
        cout << "Player 2 (O) WINS!!!!!\n\n";
        quit = true;
    }
    if (board[1][0] == board[1][1] && board[1][1]
        == board[1][2] && board[1][2] == 'O')
    {
        //printBoard(board);
        cout << "Player 2 (O) WINS!!!!!\n\n";
        quit = true;
    }
    if (board[2][0] == board[2][1] && board[2][1]
        == board[2][2] && board[2][2] == 'O')
    {
        //printBoard(board);
        cout << "Player 2 (O) WINS!!!!!\n\n";
        quit = true;
    }
    // check for diagonal wins: top left to bottom right
    if (board[0][0] == board[1][1] && board[1][1]
        == board[2][2] && board[2][2] == 'X')
    {
        printBoard(board);
        cout << "Player 1 (X) WINS!!!!!\n\n";
        quit = true;
    }
    if (board[0][0] == board[1][1] && board[1][1]
        == board[2][2] && board[2][2] == 'O')
    {
        printBoard(board);
        cout << "Player 2 (O) WINS!!!!!\n\n";
        quit = true;
    }
    // check for diagonal wins: top right to bottom left
    if (board[0][2] == board[1][1] && board[1][1]
        == board[2][0] && board[2][0] == 'X')
    {
        printBoard(board);
        cout << "Player 1 (X) WINS!!!!!\n\n";
        quit = true;
    }
    
    if (board[0][2] == board[1][1] && board[1][1]
        == board[2][0] && board[2][0] == 'X')
    {
        printBoard(board);
        cout << "Player 1 (O) WINS!!!!!\n\n";
        quit = true;
    }
    
    
    bool bIsTied;
    bIsTied = true;
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            if (board[i][j] == '*')
            {
                bIsTied = false;
            }
        }
    }
    
    if (bIsTied)
    {
        printBoard(board);
        cout << "Game Over... it's a TIE.\n\n" << endl;
        quit = true;
    }
    return quit;
}

int main()
{
    char board[3][3] { { '*', '*', '*' }, { '*', '*', '*'}, {'*', '*', '*'} };
    bool quit = false;
    
    printBoard(board);
    
    while (quit == false)
    {
        int x = 0, y = 0;
        //printBoard(board);
        
        cout << "Player X's turn." << endl;
        cout << "Enter a row and column to place an X.\n";
        cout << "Row: ";
        cin >> x;

        cout << "Column: ";
        cin >> y;
        
        pickSpot(board, x, y, 'X');
        
        quit = checkGameStatus(board);
        if (quit == false)
        {
            printBoard(board);
            
            cout << "Player O's turn." << endl;
            cout << "Enter a row and column to place an O.\n";
            cout << "Row: ";
            cin >> x;
            
            cout << "Column: ";
            cin >> y;
            
            pickSpot(board, x, y, 'O');
            
            printBoard(board);
            
            quit = checkGameStatus(board);
        }
    }
    return 0;
}
