#include <bits/stdc++.h>

using namespace std;

class Solution{
public:


    vector<int> topFrequentElements(vector<int> &nums, int k){
        
        unordered_map<int, int> mp;

        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }

        priority_queue<pair<int, int>> pq;
        vector<int> result;

        for(auto x: mp){

            pq.push(make_pair(x.second, x.first));

            if(pq.size() > (int)mp.size() - k){
                result.push_back(pq.top().second);
                pq.pop();
            }
        }

        return result;

    }
};