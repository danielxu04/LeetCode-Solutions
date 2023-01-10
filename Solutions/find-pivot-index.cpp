#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int left = 0;
        int total = 0;
        for(int j = 0; j < nums.size(); j++){
            total += nums[j];
        }
        
        for(int i = 0; i < nums.size(); ++i){
            if (left == total - left - nums[i]){
                return i;
            }  
            left += nums[i];
        }
    
    return -1;
    }
};