#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> prevMap;
        vector<int> result;
        int difference;

        for(int i = 0; i < nums.size(); i++){

            difference = target - nums[i];

            if(prevMap.find(difference) != prevMap.end()){
                result.push_back(i);
                result.push_back(prevMap[difference]);

                return result;
            }

            prevMap[nums[i]] = i;
        }


        return result;
    }
};

// correct