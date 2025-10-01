#include<iostream>
#include<string>

using namespace std;

string getWinner(char board[][3], string playerX, string playerO) {
    // Check rows
    for(int row = 0; row < 3; row++) {
        if(board[row][0] == '.') continue;
        if(board[row][0] == board[row][1] && board[row][1] == board[row][2]) {
            return (board[row][0] == 'X') ? playerX: playerO;
        }

    }
    // Check columns
    for(int col = 0; col < 3; col++) {
        if(board[0][col] == '.') continue;
        if(board[0][col] == board[1][col] && board[1][col] == board[2][col]) {
            return (board[0][col] == 'X') ? playerX: playerO;
        }
    }

    if(board[0][0] != '.' && board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return (board[0][0] == 'X') ? playerX: playerO;
    if(board[0][2] != '.' &&board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return (board[0][2] == 'X') ? playerX: playerO;
    return "Tie";
}

int main() {
    char board[3][3] = {{'O', 'X', 'X'},
                        {'O', 'X', 'X'},
                        {'X', '.', 'O'}
                    };
    string playerX = "Tina";
    string playerO = "Rob";

    cout << "Xs: " << playerX << endl;
    cout << "Os: " << playerO << endl; 
    cout << "Board:\n";
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 3; col++) {
            cout << " " << board[row][col] << ((col != 2) ? " |" : "");
        }
        cout << endl;
        if(row !=2) cout << "---+---+---" << endl;
        
    }

    cout << "Winner: " << getWinner(board, playerX, playerO);
}