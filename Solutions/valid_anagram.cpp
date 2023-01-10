#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map<char, int> checker;
        
        if(s.length() != t.length()){
            return false;
        }
        
        for(int i = 0; i < s.length(); i++){
            
            checker[s[i]]++;
            checker[t[i]]--;
            
        }
        
        for(auto check: checker){
            if(check.second){
                return false;
            }
        }
        return true;
    }
};
