#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        unordered_set<int> s(nums1.begin(), nums1.end());
        vector<int> result;

        for(auto x: nums2){
            if(s.count(x)){
                result.push_back(x);
                s.erase(x);
            }
        }

        return result;
    }
};