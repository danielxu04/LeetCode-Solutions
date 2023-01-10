#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool checkEquality(vector<int>& v1, vector<int>& v2){
        for(int i = 0; i < 26; i++){
            if(v1[i] != v2[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        
        if(s1.size() > s2.size()) return false;

        vector<int> freqS1(26, 0); /// freq of all letters of alphabet of s1
        for(char c: s1){
            freqS1[c - 'a']++; /// increment the ascii value of char c for every occurence
        }

        vector<int> freqS2(26, 0);
        int left = 0, right = 0; 

        while(right < s2.size()){
            freqS2[s2[right] - 'a']++;

            if (right - left+1 == s1.size()){
                if(checkEquality(freqS1, freqS2)) return true;
            }

            if (right - left+1 < s1.size()){ right++; } /// if the size of the window is less than the size of s1, then increment the right pointer
            else{  /// if the size of the window is greater than or equal, then we must move to a new window. shift the entire window by 1
                freqS2[s2[left] - 'a']--; 
                left++;
                right++;}

        }

        return false;
    }
};