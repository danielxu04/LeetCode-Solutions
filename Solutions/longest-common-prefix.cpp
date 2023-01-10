#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int n = strs.size();
        string prefix;

        sort(strs.begin(), strs.end());

        string s1 = strs[0];
        string s2 = strs[n-1];

        for(int i = 0; i < s1.size(); i++){
            if(s1[i] == s2[i]){
                prefix += s1[i];
            }
            else{
                break;
            }
        }

        return prefix;
    
    }
};