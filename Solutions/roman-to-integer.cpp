#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {

        unordered_map<char, int> romanValue;
        romanValue['I'] = 1;
        romanValue['V'] = 5;
        romanValue['X'] = 10;
        romanValue['L'] = 50;
        romanValue['C'] = 100;
        romanValue['D'] = 500;
        romanValue['M'] = 1000;

        int value = romanValue[s.back()];


        for(int i = 0; i < s.length() - 1; i++){
            // see if numeral in front of previous letter is bigger or not
            if(romanValue[s[i]] < romanValue[s[i + 1]]){
                value -= romanValue[s[i]];
            }
            else{
                value += romanValue[s[i]];
            }
        }

        return value;
    }
};