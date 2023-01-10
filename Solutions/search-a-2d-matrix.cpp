#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row = matrix.size();
        int col = matrix[0].size();
       
        int start = 0;
        int end = row*col - 1;


        // an array convert to n * m matrix => a[x] =>matrix[x / m][x % m];
        while(start != end){
            int mid = start + (end-start)/2;
            if (matrix[mid / col][mid % col] < target)
                start = mid + 1;
            else 
                end = mid;
        }   

        return matrix[end / col][end % col] == target;

    }
};