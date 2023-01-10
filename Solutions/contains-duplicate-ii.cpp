#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> prevMap;
        for(int i = 0; i < nums.size(); i++){
            if(prevMap.find(nums[i]) != prevMap.end() && i - prevMap[nums[i]] <= k){
                return true;
            }
            prevMap[nums[i]] = i;
        }
        return false;
    }
};