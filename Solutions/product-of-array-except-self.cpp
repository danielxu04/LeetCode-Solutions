#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<int> answer(n);
        vector<int> begin(n);
        vector<int> end(n);
        
        begin[0] = 1;
        end[0] = 1;
        

        
        for(int i = 1; i < n; i++){
            begin[i] = begin[i-1] * nums[i-1];
            end[i] = end[i-1] * nums[n-i];
        }
        
        for(int i = 0; i < n; i++){
            answer[i] = begin[i] * end[n-1-i];
        }
        
        return answer;
    }
};