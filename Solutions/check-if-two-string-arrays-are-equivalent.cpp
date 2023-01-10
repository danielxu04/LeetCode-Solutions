#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        int n1 = word1.size(), n2 = word2.size();
        int maxLen = (n1 > n2? n1 : n2);

        string w1 = "", w2 = "";

        for(int i = 0; i < maxLen; i++){
            if(i < n1){
                w1 = w1.append(word1[i]);
            }
            if(i < n2){
                w2 = w2.append(word2[i]);
            }
        }

        return w1==w2;
    }
};