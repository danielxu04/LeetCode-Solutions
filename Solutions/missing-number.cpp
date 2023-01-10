#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(), nums.end());

        int compare = 0;

        for(int i = 0; i < n; i++){
            if(nums[i] != compare){
                return compare;
            }
            compare++;
        }

        return compare;
    }
};