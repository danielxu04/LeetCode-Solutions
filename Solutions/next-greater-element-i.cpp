#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        unordered_map<int, int> mp;

        for(int n: nums2){
            while(s.size() != NULL && s.top() < n){
                mp[s.top()] = n;
                s.pop();
            }
            s.push(n);
        }

        vector<int> result;

        for(int n : nums1){
            result.push_back(mp.count(n)? mp[n] : -1);
        }

        return result;
    }
};