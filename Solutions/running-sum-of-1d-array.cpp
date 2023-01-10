#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        vector<int> run;
        
        int sum;
        
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            run.push_back(sum);
        }
        
        
        return run;
    }
};