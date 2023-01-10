#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int, int> mp;

        while(n != 1){

            if(mp[n] != 1){
                mp[n]++;
            }
            else{
                return false;
            }
            int sum = 0;
            while(n != 0){
                sum += pow(n%10, 2);
                n = n/10;
            }
            n = sum;
        }

        return true;
    }
};