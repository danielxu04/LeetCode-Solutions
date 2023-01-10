#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        // consider this matrix as a an array
        // an array convert to n * m matrix => a[x] =>matrix[x / m][x % m];

        int row = matrix.size();
        int col = matrix[0].size();

        int leftPointer = 0;
        int rightPointer = row*col - 1;

        while (leftPointer != rightPointer){

            int midPointer = leftPointer + (rightPointer - leftPointer)/2;

            if(matrix[midPointer/col][midPointer%col] < target){
                leftPointer = midPointer + 1;
            }
            else{
                rightPointer = midPointer;
            }
        }

        return matrix[rightPointer/col][rightPointer%col];

    }
};