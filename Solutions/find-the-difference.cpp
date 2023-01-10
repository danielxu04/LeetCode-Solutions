#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> mp;

        if(s == ""){
            return t[0];
        }

        for(int i = 0; i < t.length(); i++){
            mp[t[i]]++;
        }

        for(int i = 0; i < s.length(); i++){
            if(mp.find(s[i]) != mp.end() && mp[s[i]] > 0){
                mp[s[i]]--;
            }
        }

        for(auto x: mp){
            if(x.second == 1){
                return x.first;
            }
        }
        return t[0];
    }
};