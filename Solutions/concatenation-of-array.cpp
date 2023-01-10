#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        vector<int> result;
        
        int n = nums.size() * 2;

        for(int i = 0; i < n; i++){
            if (i < nums.size()){
                result.push_back(nums[i]);
            }
            else{
                result.push_back(nums[i - nums.size()]);
            }
        }

        return result;
    }
};