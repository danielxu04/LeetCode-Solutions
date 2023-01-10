#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> prevMap; // mapping val:index
        
        vector<int> result;
        
        for(int i = 0; i < nums.size(); i++){
            int difference = target - nums[i];
            
            // if something is found in the array (not equal to the end-of-line iterator)
            if (prevMap.find(difference) != prevMap.end()){
                
                result.push_back(prevMap[difference]);
                result.push_back(i);
                
                return result;
            }
            
            prevMap[nums[i]] = i;
        }
        
        return result;
    }
};