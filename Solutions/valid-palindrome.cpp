#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        
        int left = 0; 
        int right = s.length() -1;
        
        while(left < right){
            
            if(isalnum(s[left]) == false){
                left++;
            }
            else if(isalnum(s[right]) == false){
                right--;
            }
            else if(tolower(s[right]) != tolower(s[left])){
                return false;
            }
            else{
                left++;
                right--;
            }
        }
        return true;
    }
};