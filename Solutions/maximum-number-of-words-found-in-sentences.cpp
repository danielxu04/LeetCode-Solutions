#include <bits/stdc++.h>

using namespace std;


// O(N^2)

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
    
        unordered_map<string, int> wordCounter;

        for(int i = 0; i < sentences.size(); i++){

            int counter = 0; 
            string str = sentences[i];
            int sz = sentences[i].length();

            for(int j = 0; j < sz; j++){
                if(str[j] == ' '){
                    counter++;
                }
            }

            wordCounter[sentences[i]] = ++counter;
        }

        int maximum = 0;

        for(auto x: wordCounter){
            maximum = max(maximum, x.second);
        }

        return maximum;
    }
};