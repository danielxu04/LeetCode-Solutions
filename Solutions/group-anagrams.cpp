#include <bits/stdc++.h>

using namespace std;

class Solution {
public:

    vector<vector<string>> groupAnagrams(vector<string> &strs){

        unordered_map<string, vector<string>> mp;

        for(string s: strs){

            string t = s;

            sort(t.begin(), t.end());

            mp[t].push_back(s);
        }

        vector<vector<string>> result;

        for(auto x: mp){
            
            result.push_back(x.second);

        }

        return result;

    }


};