#include <bits/stdc++.h>

using namespace std;

// O(n) solution using hashmaps

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        // set maximumSum to index 0 of array
        int maximumSum = nums[0];
        int currentSum = 0;
        
        // loop through array
        for(auto x: nums){
            // if the currentSum is negative, will not result in highest sum - set back to 0
            if (currentSum < 0){
                currentSum = 0;
            }
            // add next element to the currentSum value
            currentSum += x;
            // set maximumSum to the max between current subarray and current max sum
            maximumSum = max(maximumSum, currentSum);
        }
        
        return maximumSum;
        
    }
};