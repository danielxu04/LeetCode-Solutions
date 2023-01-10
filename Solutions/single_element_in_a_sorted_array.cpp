// O(n), maybe inefficient - research how to do using maps

#include <bits/stdc++.h>

int main(){

    std::vector<int> nums = {1,1,2,3,3,4,4,8,8};

    solution(nums);

}

int solution(std::vector<int> nums){

    int n = nums.size();

    for(int i = 0; i < n; i++){
        if (i%2 == 0){
            if(nums[i] != nums[i+1]){
                return i;
            }
        }
    }
}