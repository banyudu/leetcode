#include "../common.h"

class Solution {
public:
    bool isValidSudoku(const vector<vector<char>>& board) {
        bool rowFlags[9][9] = {false};
        bool colFlags[9][9] = {false};
        bool blockFlags[9][9] = {false};

        for (char row = 0; row < 9; row++) {
            for (char col = 0; col < 9; col++) {
                if (board[row][col] != '.') {
                    char index = board[row][col] - '1';
                    if (!(
                        rowFlags[row][index] ||
                        colFlags[col][index] ||
                        blockFlags[(row / 3) * 3 + col / 3][index]
                    )) {
                        rowFlags[row][index] = true;
                        colFlags[col][index] = true;
                        blockFlags[(row / 3) * 3 + col / 3][index] = true;
                    }
                    else
                    {
                        return false;
                    }
                }
            }
        }
        return true;    
    }
};