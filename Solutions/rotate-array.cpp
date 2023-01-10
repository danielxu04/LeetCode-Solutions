#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();
        
        k = k%n;
        
        // reverse entire array
        reverse(nums.begin(), nums.end());
        
        
        // reverse from index 0 to k
        reverse(nums.begin(), nums.begin() + k);
        
        // reverse from index k to end
        reverse(nums.begin() + k,  nums.end());
        
        // strange formula to implement a rotated array but O(n) time complexity, O(1) space complexity
        
    }
};