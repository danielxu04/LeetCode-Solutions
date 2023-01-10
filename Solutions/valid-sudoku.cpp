#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int usedRow[9][9] = {0};
        int usedCol[9][9] = {0};
        int usedBox[9][9] = {0};

        for(int i = 0; i < board.size(); ++i){
            for(int j = 0; j < board[i].size(); ++j){
                if(board[i][j] != '.'){
                    // convert board num into an integer, subtract ascii value of 0, -1 for index purposes
                    int num = board[i][j] - '0' - 1;
                    int k = i/3 * 3 + j/3;

                    if(usedRow[i][num] || usedCol[j][num] || usedBox[k][num] == 1){
                        return false;
                    }

                    usedRow[i][num] = usedCol[j][num] = usedBox[k][num] = 1;
                }
            }
        }

        return true;
    }
};


