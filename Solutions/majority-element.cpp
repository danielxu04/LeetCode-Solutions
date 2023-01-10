#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;

        for(auto x: nums){
            mp[x]++;
        }

        priority_queue<pair<int, int>> pq;

        for(auto y: mp){
            pq.push(make_pair(y.second, y.first));
        }

        return pq.top().second;
    }
};