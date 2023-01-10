#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int map1[256] = {0}, map2[256] = {0}, len = s.size();
        
        for(int i = 0; i < len; i++){
            if(map1[s[i]] != map2[t[i]]){
                return false;
            }
            
            map1[s[i]] = i + 1;
            map2[t[i]] = i + 1;
        }
        
        return true;
    }
};


// REVIEW SOLUTION AGAIN - MAPPING doesnt really make sense right now