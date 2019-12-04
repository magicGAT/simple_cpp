
#include <iostream>
using namespace std;

/******************************************************************************
 * Function Prototypes                                                        *
 ******************************************************************************/
void printBoard(const char board[3][3]);
void updateBoard(char board[3][3], int row, int col, char marker);
int isOver(const char board[3][3]);

/******************************************************************************
 * main - starting point                                                      *
 ******************************************************************************/
int main() {
    // variable setup
    char board[3][3] = {
        {'_', '_', '_'},
        {'_', '_', '_'},
        {'_', '_', '_'}
    };
    int player = 1, row = 0, col = 0, status = isOver(board);
    char p1 = 'X', p2 = 'O';

    // game loop
    while (status == 0) {
        // player 1's turn
        if (player == 1) {
            cout << "Player 1 enter move: ";
            cin >> row >> col;
            updateBoard(board, row, col, p1);
            player = 2;
        }

        // player 2's turn
        else {
            cout << "Player 2 enter move: ";
            cin >> row >> col;
            updateBoard(board, row, col, p2);
            player = 1;
        }

        // print and check board status
        printBoard(board);
        status = isOver(board);
    }

    // winner message
    if (status == 1) {
        cout << "Player 1 wins!" << endl;
    }
    else if (status == 2) {
        cout << "Player 2 wins!" << endl;
    }
    else if (status == 3) {
        cout << "It's a tie :(" << endl;
    }

    // terminate
    return 0;
}

/******************************************************************************
 * Function Definitions                                                       *
 ******************************************************************************/
void printBoard(const char board[3][3]) {
    for (int i = 0; i < 3; i++)
    {
    	int row = i;
    	for (int i = 0; i < 3; i++)
    	{
    		cout << " " << board[row][i] << " ";
    	}
    	cout << endl;
    }
}

void updateBoard(char board[3][3], int row, int col, char marker) {
    while (row < 0 || row > 2 ||
           col < 0 || col > 2 ||
           board[row][col] != '_'
          ) {
        cout << "Invalid entry, try again: ";
        cin >> row >> col;
    }

    board[row][col] = marker;
}

// 0 - game is not over
// 1 - player 1 wins
// 2 - player 2 wins
// 3 - tie game
int isOver(const char board[3][3]) {
    int status = 0;

    // did player 1 (X) win?
    if (
        (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') ||
        (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') ||
        (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X') ||
        (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X') ||
        (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X') ||
        (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X') ||
        (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') ||
        (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X')
       ) {
        status = 1;
    }

    // did player 2 (O) win?
    else if (
        (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O') ||
        (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O') ||
        (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O') ||
        (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O') ||
        (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O') ||
        (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O') ||
        (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') ||
        (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O')
       ) {
        status = 2;
    }

    // is it a tie?
    else {
        bool flag = false;
        for (int row = 0; row < 3; row++) {
            for (int col = 0; col < 3; col++) {
                if (board[row][col] == '_') {
                    flag = true;
                    break;
                }
            }
        }
        if (!flag) {
            status = 3;
        }
    }

    // return
    return status;
}
