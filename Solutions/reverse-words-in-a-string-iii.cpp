#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    string reverseWords(string s) {

        // acts as a pointer to track where we are in the char array
        int i = 0;
        
        
        for(int j = 0; j < s.length(); j++){
            // if we encounter a space
            if (s[j] == ' '){
                // reverse the word
                reverse(s.begin() + i, s.begin() + j);

                // i = j + 1 so we skip over the space - the begin() iterator can start on the first letter of the next word
                i = j + 1;
            }
        }
        
        // since there is no space at the end, mannually reverse last word
        reverse(s.begin() + i, s.end());
        
        return s;
    
    }
};

/* 

O(n^2) solution - try to find O(n) solution since O(n^2) TLE

class Solution {
public:
    string reverseWords(string s) {
        for(int i = 0; i < s.length(); i++){
            if (s[i] = ' '){
                int j = i;
                
                for(; j < s.length() && s[j] != ' '; j++){  }
                
                reverse(s.begin() + i, s.begin() + j);
                
                i = j - 1; 
            }
        }
        
        return s;
        
    }
    
    
};

*/