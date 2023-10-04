#include <iostream>
using namespace std;
void DISPLAY_BOARD(char board[3][3]) 
{
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            cout << board[i][j];
            if (j < 2) 
            {
                cout << " | ";
            }
        }
        cout << endl;
        if (i < 2) 
        {
            cout << "---------" << endl;
        }
    }
}
bool CHECK_WIN(char board[3][3], char player) 
{
    for (int i = 0; i < 3; i++) 
    {
        if ((board[i][0] == player )&&( board[i][1] == player) && (board[i][2] == player)) 
        {
            return true;
        }
        if ((board[0][i] == player) && (board[1][i] == player) && (board[2][i] == player)) 
        {
            return true;
        }
    }
    if ((board[0][0] == player) && (board[1][1] == player) && (board[2][2] == player)) 
    {
        return true;
    }
    if ((board[0][2] == player) && (board[1][1] == player) && (board[2][0] == player)) 
    {
        return true;
    }
    return false;
}
bool CHECK_DRAW(char board[3][3]) 
{
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            if (board[i][j] == ' ') 
            {
                return false;
            }
        }
    }
    return true;
}
int main() 
{
    char board[3][3] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
    char currentPlayer = 'X';
    bool gameOver = false;
    while (!gameOver) 
    {
        system("cls");
        DISPLAY_BOARD(board);
        cout << "\nONGOING !\nPlayer " << currentPlayer << ", enter your move (row and column):\n";
        int row, col;
        cin >> row >> col;
        if ((row < 1 )||( row > 3 )|| (col < 1) || (col > 3 )|| (board[row - 1][col - 1] != ' ')) 
        {
            cout << "Invalid move! Try again." << endl;
            continue;
        }
        board[row - 1][col - 1] = currentPlayer;
        if ((CHECK_WIN(board, currentPlayer))) 
        {
            system("cls");
            DISPLAY_BOARD(board);
            cout << "Player " << currentPlayer << " wins!" << endl;
            gameOver = true;
        } 
        else if ((CHECK_DRAW(board))) 
        {
            system("cls");
            DISPLAY_BOARD(board);
            cout << "It's a draw!" << endl;
            gameOver = true;
        } 
        else 
        {
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        }
    }
    cout << "Do you want to play again? (y/n): ";
    char playAgain;
    cin >> playAgain;
    if ((playAgain == 'y') || (playAgain == 'Y')) 
    {
        main();
    } 
    else 
    {
        cout << "Thanks for playing!" << endl;
    }
    return 0;
}
