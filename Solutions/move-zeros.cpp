#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int zeroCounter = 0;
        int n = nums.size();
        
        for (int i = 0; i < n; i++){
            if(nums[i] == 0){
                zeroCounter++;
            }
        }
        
        vector<int> v;
        
        for(int i = 0; i < n; i++){
            if(nums[i] != 0){
                v.push_back(nums[i]);
            }
        }
        
        for(int i = 0; i < zeroCounter; i++){
            v.push_back(0);
        }
        
        for(int i = 0; i < n; i++){
            nums[i] = v[i];
        }
    }
};


// Optimal Time/Space complexity