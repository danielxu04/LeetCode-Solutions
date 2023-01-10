#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {

        int arr[101] = {};
        int result = 0; 

        for(auto n: nums){
            result += arr[n]++;
        }

        return result;
    }
};