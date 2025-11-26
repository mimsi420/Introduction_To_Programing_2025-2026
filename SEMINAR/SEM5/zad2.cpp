#include <iostream>
using namespace std;

const int SIZE = 3;


void printBoard(const char board[SIZE][SIZE])
{
    cout << "  1   2   3\n";

    for (int i = 0; i < SIZE; ++i)
    {
        cout << i + 1 << " ";

        for (int j = 0; j < SIZE; ++j)
        {
            cout << board[i][j];
            if (j < SIZE - 1)
                cout << " | ";
        }

        cout << "\n";
        if (i < SIZE - 1)
        {
            cout << " ---+---+---\n";
        }
    }
}

bool hasWon(const char board[SIZE][SIZE], char player)
{
    for (int i = 0; i < SIZE; ++i)
    {
        bool rowWin = true;
        for (int j = 0; j < SIZE; ++j)
        {
            if (board[i][j] != player)
            {
                rowWin = false;
                break;
            }
        }
        if (rowWin)
            return true;
    }

    for (int j = 0; j < SIZE; ++j)
    {
        bool colWin = true;
        for (int i = 0; i < SIZE; i++)
        {
            if (board[i][j] != player)
            {
                colWin = false;
                break;
            }
        }

        if (colWin)
            return true;
    }

    bool mainDiag = true;
    for (int i = 0; i < SIZE; ++i)
    {
        if (board[i][i] != player)
        {
            mainDiag = false;
            break;
        }
    }
    if (mainDiag)
        return true;

    bool antiDiag = true;
    for (int i = 0; i < SIZE; ++i)
    {
        if (board[i][SIZE - 1 - i] != player)
        {
            antiDiag = false;
            break;
        }
    }
    if (antiDiag)
        return true;

    return false;
}

int main()
{
    char board[SIZE][SIZE] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };

    char currentPlayer = 'X';
    

    for (int move = 0; move < 9; ++move)
    {
        printBoard(board);

        while (true) {
            cout << "\n It's " << currentPlayer << "'s turn! Type a coordinate (row column):\n";

            int r, c;
            cin >> r >> c;

            if (r < 1 || r > 3 || c < 1 || c > 3)
            {
                cout << "Invalid coordinates! Try again.\n";
                continue;
            }

            int row = r - 1;
            int col = c - 1;

            if (board[row][col] != ' ')
            {
                cout << "Cell already taken! Try again.\n";
                continue;
            }

            board[row][col] = currentPlayer;

            if (hasWon(board, currentPlayer))
            {
                printBoard(board);
                cout << "\nPlayer " << currentPlayer << " wins!\n";
                return 0;
            }

            break;
        }

        if (currentPlayer == 'X')
            currentPlayer = 'O';
        else
            currentPlayer = 'X';

        cout << "\n";

    }

    printBoard(board);
    cout << "\nIt's a draw!\n";

    return 0;
}
