#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int left = 0;
        int right = n - 1;
        int sum;
        
        vector<int> res;
        
        while(left < right){
            sum = numbers[left] + numbers[right];
            
            if(sum > target){
                right--;
            }
            else if(sum < target){
                left++;
            }
            else{
                res.push_back(left+1);
                res.push_back(right+1);
                return res;
            }
        }
        
        return res;
    }
};

// TWO POINTERS