#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    
        vector<vector<int>> result;
        
        sort(nums.begin(), nums.end());
        
        
        for(int i = 0; i < nums.size(); i++){
            int target = -nums[i];
            int front = i + 1;
            int end = nums.size() - 1;
            
            while(front < end){
                
                int sum = nums[front] + nums[end];
                
                if(sum < target){
                    front++;
                }
                else if (sum > target){
                    end--;
                }
                else{
                    vector<int> triplet = {nums[front], nums[end], nums[i]};
                    result.push_back(triplet);
                    
                    while(front < end && nums[front] == triplet[0]){
                        front++;
                    }
                    while(front < end && nums[end] == triplet[1]){
                        end--;
                    }
                }
            }
            while (i + 1 < nums.size() && nums[i + 1] == nums[i]){
                i++;
            }   
        }
        
        return result;
    }
};