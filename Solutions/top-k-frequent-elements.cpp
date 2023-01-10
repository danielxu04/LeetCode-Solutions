#include <bits/stdc++.h>

using namespace std;

class Solution{
public:


    // O(N) solution - two iterations
    vector<int> topFrequentElements(vector<int> &nums, int k){
        
        unordered_map<int, int> count;

        // map each integer to the number of appearances they have
        for(auto x: nums){
            count[x]++;
        }

        vector<int> result;

        priority_queue<pair<int, int>> pq;

        // loop through each element in the count map
        for (auto x: count){
            // create pairs in the priority queue, (number of appearances, mapped value)
            pq.push(make_pair(x.second, x.first));

            // if size of priority queue is greater than size of map - k
            // begin to push the top values of the priority queue into the result vector
            if(pq.size() > (int)count.size() - k){
                
                result.push_back(pq.top().second);
                pq.pop();

            }
        }

    return result;


    }


};