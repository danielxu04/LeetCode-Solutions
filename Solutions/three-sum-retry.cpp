#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        

        vector<vector<int>> result;


        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size(); i++){
            int target = -nums[i];
            int leftPointer = i + 1;
            int rightPointer = nums.size() - 1;


            while(leftPointer < rightPointer){

                int sum = nums[leftPointer] + nums[rightPointer];

                if(sum < target){
                    leftPointer++;
                }
                else if(sum > target){
                    rightPointer--;
                }
                // sum = target
                else{
                    vector<int> triplet = {nums[leftPointer], nums[rightPointer], nums[i]};
                    result.push_back(triplet);

                    while(leftPointer < rightPointer && nums[leftPointer] == triplet[0]){
                        leftPointer++;
                    }
                    while(leftPointer < rightPointer && nums[rightPointer] == triplet[1]){
                        rightPointer--;
                    }
                }
            }

            while(i + 1 < nums.size() && nums[i] == nums[i+1]){
                i++;
            }
        }

        return result;


    }
};