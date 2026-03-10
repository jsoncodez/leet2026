#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:


    void printBoard(vector<vector<char>>& board) {

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                cout << board[i][j] << ' ';
            }
            cout << endl;
        }
    }

    bool validate(const vector<vector<char>>& board, int row, int col, char num) {

        for (int i = 0; i < board.size(); i++) {
            if (board[row][i] == num) return false;
        }

        for (int i = 0; i < board.size(); i++) {
            if (board[i][col] == num) return false;
        }

        int currentRow = row - row % 3;
        int currentCol = col - col % 3;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[currentRow + i][currentCol + j] == num) return false;
            }
        }

        return true;
    }


    bool isValidSudoku(vector<vector<char>>& board) {

        for (int row = 0; row < board.size(); row++) {
            for (int col = 0; col < board.size(); col++) {
                if (board[row][col] == '.') {

                    for (char num = '1'; num <= '9'; num++) {
                        if (validate(board, row, col, num)) {
                            board[row][col] = num;

                            if (isValidSudoku(board)) {
                                return true;
                            }

                            board[row][col] = '.';
                        }
                    }
                    return false;
                }
            }
        }

        printBoard(board);

        return true;
    }

};

int main() {


    vector<vector<char>> board =
    {{'5','3','.','.','7','.','.','.','.'}
    ,{'6','.','.','1','9','5','.','.','.'}
    ,{'.','9','8','.','.','.','.','6','.'}
    ,{'8','.','.','.','6','.','.','.','3'}
    ,{'4','.','.','8','.','3','.','.','1'}
    ,{'7','.','.','.','2','.','.','.','6'}
    ,{'.','6','.','.','.','.','2','8','.'}
    ,{'.','.','.','4','1','9','.','.','5'}
    ,{'.','.','.','.','8','.','.','7','9'}};

    Solution ans;

    ans.isValidSudoku(board);

    return 0;
}
